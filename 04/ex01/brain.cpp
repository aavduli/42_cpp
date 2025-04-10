/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:05:44 by aavduli           #+#    #+#             */
/*   Updated: 2025/04/09 17:18:23 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain() {
	std::cout << "default constructor for Brain called" << std::endl;
	for (int i = 0; i < 100 ; i++)
		idea[i] = "";
}

Brain::Brain(const Brain &other) {
	std::cout << "Copy constructor for brain called." << std::endl;
	for (int i = 0 ; i < 100 ; i++)
		idea[i] = other.idea[i];
}

Brain &Brain::operator=(const Brain &rhs) {
	if (this != &rhs) {
		for (int i = 0; i < 100; i++) {
			this->idea[i] = rhs.idea[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::setIdea(int index, const std::string &_idea) {
	this->idea[index] = _idea;
} 

std::string	Brain::getIdea(int index) {
	return this->idea[index];
}
