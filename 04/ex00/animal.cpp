/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:01:44 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/16 18:48:10 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal() : type() {
	std::cout << "Default constructor for animal called." << std::endl;
}

Animal::Animal(const std::string& type){
	std::cout << "Animal constructor was called with type: " << type << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
	std::cout << "Animal's copy constructor was called." << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal Destructor was called." << std::endl;
}

std::string Animal::getType() {
	return this->type;
}
