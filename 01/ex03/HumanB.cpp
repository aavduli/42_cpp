/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:51:32 by aavduli           #+#    #+#             */
/*   Updated: 2024/12/10 15:56:21 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const std::string &name) : name(name), weapon(NULL) {
	std::cout << "Human B: " << this->name << " has spawned without a weapon." << std::endl;
}

HumanB::~HumanB() {
	std::cout << "Human B: " << this->name << " has been killed." << std::endl;
}
void HumanB::setWeapon(Weapon &newWeapon) {
	weapon = &newWeapon;
	std::cout << this->name << " has equiped the weapon :" << weapon->getType() << std::endl;
}
void HumanB::attack() const {
	if (this->weapon != NULL)
		std::cout << this->name << " has attacked with weapon: " << weapon->getType() << std::endl;
	else
		std::cout << this->name << " tries to attack but has no weapon!" << std::endl;
}

void HumanB::setName(const std::string &newName) {
	name = newName;
}

std::string HumanB::getName() const {
	return this->name;
}
