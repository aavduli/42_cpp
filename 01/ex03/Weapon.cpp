/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:31:39 by aavduli           #+#    #+#             */
/*   Updated: 2024/12/10 15:36:43 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std ::string &weaponType) {
	setType(weaponType);
	std::cout << "Weapon constructor has been called." << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon destructor is called." << std::endl;
}

const	std::string& Weapon::getType() const{
	return type;
}

void	Weapon::setType(const std::string& newType) {
	type = newType;
}
