/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:05:39 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/16 15:40:26 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& _name) : ClapTrap(_name) {
	setHP(100);
	setEP(50);
	setAD(20);
	std::cout << "ScavTrap's constructor was called. " << getName() << " has: " <<  "hp: " << getHP() << " ep: " << getEP()
	<< " ad: " << getAD() << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) 
	: ClapTrap(other) {
		std::cout << "Copy constructor was called for ScavTrap." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap's destructor was called" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " is now in gate keeper mode." << std::endl;
}
