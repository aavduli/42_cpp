/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:00:20 by aavduli           #+#    #+#             */
/*   Updated: 2024/12/11 14:46:08 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	print_err(int error) {
	
	if (error == ARGS) {
		std::cout << "Error, 3 args needed. <filename> <s1> <s2>." << std::endl;
	}
	if (error == EMPTY) {
		std::cout << "<s1> or <s2> is empty." << std::endl;
	}
	if (error == INPUT) {
		std::cout << "problem with input file." << std::endl;
	}
	if (error == OUTPUT) {
		std::cout << "problem with output file" << std::endl;
	}
}

void	replace(const std::string &infile, const std::string &outfile,
					const std::string &s1, const std::string &s2) {
	
	std::ifstream inputfile(infile.c_str());
	if (!inputfile.is_open()) {
		print_err(INPUT);
		return ;
	}
	std::ofstream outputfile(outfile.c_str());
	if (!outputfile.is_open()) {
		print_err(OUTPUT);
		return ;
	}
	std::string line;
	while (std::getline(inputfile, line)) {
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) {
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outputfile << line << '\n';
	}
	inputfile.close();
	outputfile.close();
	return ;
}

int	main(int ac, char **av) {
	
	if (ac != 4) {
		print_err(ARGS);
		return 1;
	}
	const std::string infile = av[1];
	const std::string s1 = av[2];
	const std::string s2 = av[3];
	const std::string outfile = infile + ".replace";
	if (s1.empty() || s2.empty()) {
		print_err(EMPTY);
		return 1;
	}
	replace(infile, outfile, s1, s2);
	return 0;
}
