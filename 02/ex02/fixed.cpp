/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:34:24 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/10 15:58:57 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
	//std::cout << "Default constructor has been called." << std::endl;
}

Fixed::Fixed(const int value) {
	//std::cout << "int constructor called." << std::endl;
	this->_fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(const float value) {
	std::cout << "float constructor called." << std::endl;
	this->_fixedPointValue = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed (const Fixed &src) : _fixedPointValue(src._fixedPointValue) {
	//std::cout << "Copy constructor has been called." << std::endl;
	this->_fixedPointValue = src.getRawBits();
}

Fixed Fixed::operator=(const Fixed &rhs) {
	//std::cout << "Copy assignement operator called." << std::endl;
	if (this != &rhs)
		this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	//std::cout << "Destructor has been called." << std::endl;
}

int Fixed::getRawBits(void) const {
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
	this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const {
	return static_cast<float>(this->_fixedPointValue) / (1 << _fractionalBits);
}

int	Fixed::toInt(void) const {
	return this->_fixedPointValue >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}

Fixed Fixed::operator+(const Fixed &rhs) const{
	Fixed result;
	result.setRawBits(this->_fixedPointValue + rhs._fixedPointValue);
	return result;
}

Fixed Fixed::operator-(const Fixed &rhs) const{
	Fixed result;
	result.setRawBits(this->_fixedPointValue - rhs._fixedPointValue);
	return result;
}

Fixed Fixed::operator*(const Fixed &rhs) const{
	Fixed result;
	result.setRawBits((this->_fixedPointValue * rhs._fixedPointValue) >> _fractionalBits);
	return result;
}

Fixed Fixed::operator/(const Fixed &rhs) const{
	Fixed result;
	if (rhs._fixedPointValue == 0) {
		std::cout << "Divison by zero" << std::endl;
		return result;
	}
	result.setRawBits((this->_fixedPointValue << _fractionalBits) / rhs._fixedPointValue);
	return result;
}

bool Fixed::operator==(const Fixed &rhs) const{
	return this->_fixedPointValue == rhs._fixedPointValue;
}

bool Fixed::operator>=(const Fixed &rhs) const{
	return this->_fixedPointValue >= rhs._fixedPointValue;
}

bool Fixed::operator<=(const Fixed &rhs) const{
	return this->_fixedPointValue <= rhs._fixedPointValue;
}

bool Fixed::operator!=(const Fixed &rhs) const{
	return this->_fixedPointValue != rhs._fixedPointValue;
}

bool Fixed::operator>(const Fixed &rhs) const{
	return this->_fixedPointValue > rhs._fixedPointValue;
}

bool Fixed::operator<(const Fixed &rhs) const{
	return this->_fixedPointValue < rhs._fixedPointValue;
}

Fixed Fixed::operator++() {
	this->_fixedPointValue += 1;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	this->_fixedPointValue += 1;
	return temp;
}

Fixed Fixed::operator--() {
	this->_fixedPointValue -= 1;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	this->_fixedPointValue -= 1;
	return temp;
}

Fixed &Fixed::min(Fixed &lhs, Fixed &rhs) {
	return (lhs.getRawBits() < rhs.getRawBits()) ? lhs : rhs;
}

const Fixed &Fixed::min(const Fixed &lhs, const Fixed &rhs) {
	return (lhs.getRawBits() < rhs.getRawBits()) ? lhs : rhs;
}

Fixed &Fixed::max(Fixed &lhs, Fixed &rhs) {
	return (lhs.getRawBits() > rhs.getRawBits()) ? lhs : rhs;
}

const Fixed &Fixed::max(const Fixed &lhs, const Fixed &rhs) {
	return (lhs.getRawBits() > rhs.getRawBits()) ? lhs : rhs;
}
