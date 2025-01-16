/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:05:39 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/16 16:11:25 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& _name) : ClapTrap(_name) {
	setHP(100);
	setEP(50);
	setAD(20);
	std::cout << "ClapTrap's wife: ScavTrap's constructor was called. " << getName() << " has: " <<  "HP: " << getHP() << " EP: " << getEP()
	<< " AD: " << getAD() << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) 
	: ClapTrap(other) {
		std::cout << "Copy constructor was called for ScavTrap." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap's destructor was called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (this->getEP() == 0) {
		std::cout << name << " can't attack because he is out of energy point." << std::endl;
		return ;
	}
	if (this->getHP() == 0) {
		std::cout << name << " can't attack because he is out of HP." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << getName() << " hit " << target << ", causing " << getAD() << " point of strong dammage." 
		<< std::endl;
	setEP(getEP() - 1);
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << getName() << " is now in gate keeper mode." << std::endl;
}

