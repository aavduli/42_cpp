/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:30:25 by aavduli           #+#    #+#             */
/*   Updated: 2024/12/10 15:41:03 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(const std::string &name, Weapon& weapon) : name(name), weapon(weapon) {
	std::cout << "Human A: " << this->name << " has spawned with the weapon : " 
		<< this->weapon.getType() << std::endl;
}

HumanA::~HumanA() {
	std::cout << "Human A: " << this->name << " has been killed." << std::endl;
}

void HumanA::attack() const {
	std::cout << this->getName() << " has attacked with :" << this->weapon.getType() << std::endl;
}

void HumanA::setName(const std::string &newName) {
	name = newName;
}

std::string HumanA::getName() const {
	return name;
}

