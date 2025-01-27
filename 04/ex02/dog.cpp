/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:01:42 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/24 12:40:19 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	this->_brain = new Brain();
	for (int i = 0; i < 100; ++i)
		_brain->setIdea(i, "Dog idea");
	std::cout << "Dog constructor was called." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Dog's copy constructor was called." << std::endl;
	this->_brain = new Brain(*(other._brain));
}

Dog &Dog::operator=(const Dog &rhs) {
	if (this != &rhs) {
		this->type = rhs.type;
		delete this->_brain;
		this->_brain = new Brain(*(rhs._brain));
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog's destructor was called." << std::endl;
	delete this->_brain;
}

void	Dog::makeSound() const {
	std::cout << "Woof! Woof!" << std::endl;
}

std::string	Dog::getIdea(int index) const{
	return this->_brain->getIdea(index);
}
