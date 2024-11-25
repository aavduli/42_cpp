/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:34:07 by aavduli           #+#    #+#             */
/*   Updated: 2024/11/25 14:52:34 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook() : contactCount(8) {}

void PhoneBook::addContact() {
	if (contactCount >= 8) {
		std::cout << "Replacing the oldest contact." << std::endl;
	}
	contacts[contactCount % 8].setContact();
	contactCount++;
}

void PhoneBook::searchContact () const {
	std::cout << "| INDEX | FIRST NAME | LAST NAME | NICKNAME" << std::endl;
	for (int i = 0; i < std::min(contactCount, 8); i++) {
		std::cout << "|"
			<< std::setw(10) << i  + 1 << "|"
			<< std::setw(10) << contacts[i].getField("firstName").substr(0, 10) << "|"
			<< std::setw(10) << contacts[i].getField("lastName").substr(0, 10) << "|"
			<< std::setw(10) << contacts[i].getField("nickname").substr(0, 10) << "|"
			<< std::endl;
	}
	std::cout << "Index :";
	int index;
	std::cin >> index;
	if (index > 0 && index <= std::min(contactCount, 8)) {
		contacts[index -1].displayFullContact();
	}
	else {
		std::cout << "invalid syntax." << std::endl;
	}
	std::cin.ignore();
}
