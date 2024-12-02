/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:34:10 by aavduli           #+#    #+#             */
/*   Updated: 2024/11/28 16:51:06 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main() {
	PhoneBook phoneBook;
	std::string command;

	while (true) {
		std::cout << "Enter a command (ADD, SEARCH, EXIT) : ";
		std::getline(std::cin, command);
		if (std::cin.eof()) {
			std::cout << "\nEnd of input detected, exiting Phonebook properly." << std::endl;
			break;
		}
		if (command == "ADD") {
			phoneBook.addContact();
		}
		else if (command == "SEARCH"){
			phoneBook.searchContact();
		}
		else if (command == "EXIT") {
			break ;
		}
		else {
			std::cout << "invalid command. Please try again." << std::endl;
		}
	}
	return (0);
}
