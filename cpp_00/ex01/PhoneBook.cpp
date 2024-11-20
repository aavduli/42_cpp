/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:34:07 by aavduli           #+#    #+#             */
/*   Updated: 2024/11/20 16:36:28 by aavduli          ###   ########.fr       */
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
