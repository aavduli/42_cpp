/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:01:42 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/21 14:37:57 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	std::cout << "Dog constructor was called." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Dog's copy constructor was called." << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
	if (this != &rhs) {
		this->type = rhs.type;
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog's destructor was called." << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Woof! Woof!" << std::endl;
}
