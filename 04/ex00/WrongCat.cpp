/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:14:52 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/17 13:32:59 by aavduli          ###   ########.fr       */
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

WrongCat::~WrongCat() {
	std::cout << "Wrong Cat's destructor called" << std::endl;
}

void WrongCat::Makesound() {
	std::cout << "Woof woof" << std::endl;
}
