/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:33:38 by aavduli           #+#    #+#             */
/*   Updated: 2024/11/28 16:49:03 by aavduli          ###   ########.fr       */
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
	do {
		std::cout << "First Name: ";
		std::getline(std::cin, firstName);
	if (firstName.empty())
		std::cout << "First Name cannot be empty." << std::endl;
	} while (firstName.empty());
	do {
		std::cout << "Last Name: ";
		std::getline(std::cin, lastName);
		if (lastName.empty())
			std::cout << "Last Name cannot be empty." << std::endl;
	} while (lastName.empty());
	do {
		std::cout << "Nickname: ";
		std::getline(std::cin, nickname);
		if (nickname.empty())
			std::cout << "Please, choose a Nickname. It will be fun." << std::endl;
	} while (nickname.empty());
	do {
		std::cout << "Phone Number: ";
		std::getline(std::cin, phoneNumber);
		if (!isNumber(phoneNumber))
			std::cout << "invalid phone number. Please enter digit Only." << std::endl;
		if (phoneNumber.empty())
			std::cout << "Phone number cannot be empty." << std::endl;
	} while (!isNumber(phoneNumber) || phoneNumber.empty());
	do {
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, darkestSecret);
		if (darkestSecret.empty())
			std::cout << "Please tell me your secret, it will stay between us." << std::endl;
	} while (darkestSecret.empty());
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
