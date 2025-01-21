/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:15:03 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/21 14:05:28 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type() {
	std::cout << "Default Wrong Animal's constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& _type) : type(_type) {
	std::cout << "Wrong Animal's constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
	std::cout << "Wrong Animal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Wrong Animal destructor called" << std::endl;
}

std::string WrongAnimal::getType(){
	return this->type;
}

void	WrongAnimal::makeSound() {
	std::cout << "Bruuuuuuuuuuuuuuu" << std::endl;
}
