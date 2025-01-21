/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:14:52 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/21 14:40:15 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "Wrong Cat's copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
	if (this != &rhs) {
		this->type = rhs.type;
	}
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "Wrong Cat's destructor called" << std::endl;
}

void WrongCat::Makesound() {
	std::cout << "Woof woof" << std::endl;
}
