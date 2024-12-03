/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:43:11 by aavduli           #+#    #+#             */
/*   Updated: 2024/12/03 14:18:43 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie() : name("Unnamed") {}

Zombie::Zombie(std::string zombieName) : name(zombieName) {}

Zombie::~Zombie() {
	std::cout << "Zombie " << name << " destroyed." << std::endl;
}

void Zombie::setName(std::string zombieName) {
	name = zombieName;
}

void Zombie::announce(void) const {
	std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
