/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:01:46 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/16 18:38:42 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	std::cout << "Cat constructor was called." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat's copy constructor was called." << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat's destructor was called." << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
