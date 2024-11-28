/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:17:20 by aavduli           #+#    #+#             */
/*   Updated: 2024/11/28 14:36:40 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName) : name(zombieName) {}

Zombie::~Zombie() {
	std::cout << name << " is destroyed." << std::endl;
}

void Zombie::announce(void) {
	std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
