/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:01:46 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/27 13:23:50 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	this->_brain = new Brain();
	for (int i = 0; i < 100; ++i)
		_brain->setIdea(i, "Cat idea");
	std::cout << "Cat's default constructor was called." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat's copy constructor was called." << std::endl;
	this->_brain = new Brain(*(other._brain));
}

Cat &Cat::operator=(const Cat &rhs) {
	if (this != &rhs) {
		this->Animal::operator=(rhs);
		delete this->_brain;
		this->_brain = new Brain(*(rhs._brain));
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat's destructor was called." << std::endl;
	delete this->_brain;
}

void	Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}


std::string	Cat::getIdea(int index) const{
	return this->_brain->getIdea(index);
}
