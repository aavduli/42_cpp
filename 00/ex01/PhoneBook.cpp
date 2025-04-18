/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:34:07 by aavduli           #+#    #+#             */
/*   Updated: 2024/11/28 16:30:25 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <stdio.h>

PhoneBook::PhoneBook() : contactCount(0) {}

void PhoneBook::addContact() {
	if (contactCount >= 8) {
		std::cout << "Replacing the oldest contact." << std::endl;
	}
	contacts[contactCount % 8].setContact();
	contactCount++;
}

std::string truncateField(const std::string &field) {
	if (field.length() > 10)
		return (field.substr(0, 9) + ".");
	return (field);
}

void PhoneBook::searchContact () const {
	std::cout << "|  INDEX  | FIRST NAME | LAST NAME | NICKNAME" << std::endl;
	for (int i = 0; i < std::min(contactCount, 8); i++) {
		std::cout << "|"
			<< std::setw(10) << i  + 1 << "|"
			<< std::setw(10) << truncateField(contacts[i].getField("firstName")) << "|"
			<< std::setw(10) << truncateField(contacts[i].getField("lastName")) << "|"
			<< std::setw(10) << truncateField(contacts[i].getField("nickname")) << "|"
			<< std::endl;
	}
	std::cout << "Index :";
	int index;
	std::cin >> index;
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore();
	}
	if (index > 0 && index <= std::min(contactCount, 8)) {
		contacts[index -1].displayFullContact();
	}
	else {
		std::cout << "invalid syntax." << std::endl;
	}
	std::cin.ignore();
}
