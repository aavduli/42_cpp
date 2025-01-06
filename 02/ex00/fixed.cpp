/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:10:19 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/06 13:29:09 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
	std::cout << "Default constructor has been called." << std::endl;
}

Fixed::Fixed (const Fixed &src) {
	std::cout << "Copy constructor has been called." << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
	std::cout << "Copy assignement operator called." << std::endl;
	if (this != &rhs)
		this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor has been called." << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits function called." << std::endl;
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits function called." << std::endl;
	this->_fixedPointValue = raw;
}
