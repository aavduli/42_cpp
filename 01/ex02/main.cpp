/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:55:40 by aavduli           #+#    #+#             */
/*   Updated: 2024/12/03 15:04:11 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main() {

	std::string brain = "HI THIS IS BRAIN.";

	std::string* stringPTR = &brain;
	std::string& stringREF = brain;
	
	std::cout << "Memory adress of the string variable :" << &brain << std::endl;
	std::cout << "Memory adress held by stringPTR ;" << stringPTR << std::endl;
	std::cout << "Memory adress held by stringREF :" << &stringREF << std::endl;

	std::cout << "Value of the string variable :" << &brain << std::endl;
	std::cout << "Value pointed to by stringPTR :" << stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF :" << &stringREF << std::endl;

	return 0;
}
