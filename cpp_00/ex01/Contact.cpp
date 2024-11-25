/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:33:38 by aavduli           #+#    #+#             */
/*   Updated: 2024/11/25 15:19:11 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool isNumber(const std::string &str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (!isdigit(str[i])) {
			return false;
		}
	}
	return true;
}

void	Contact::setContact() {
	std::cout << "First Name: ";
	std::getline(std::cin, firstName);
	std::cout << "Last Name: ";
	std::getline(std::cin, lastName);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	do {
		std::cout << "Phone Number: ";
		std::getline(std::cin, phoneNumber);
		if (!isNumber(phoneNumber)) {
			std::cout << "invalid phone number. Please enter digit Only." << std::endl;
		}
	} while (!isNumber(phoneNumber));
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkestSecret);
}

std::string Contact::getField(const std::string &field) const {
	if (field == "firstName") return firstName;
	if (field == "lastName") return lastName;
	if (field == "nickname") return nickname;
	return ("");
}

void Contact::displayFullContact() const {
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}
