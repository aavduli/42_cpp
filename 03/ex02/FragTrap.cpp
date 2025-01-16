/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:46:32 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/16 16:09:57 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& _name) : ClapTrap(_name) {
	setHP(100);
	setEP(100);
	setAD(30);
	std::cout << "Big boss FragTrap's constructor was called. " << getName() << " has: " <<  "HP: " << getHP() << " EP: " << getEP()
	<< " AD: " << getAD() << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) 
	: ClapTrap(other) {
		std::cout << "Copy constructor was called for FragTrap." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap's destructor was called" << std::endl;
}


void	FragTrap::highFiveGuys() {
	std::cout << 
	"Hey there! 🌟 You're doing an amazing job, and I think that deserves some serious celebration. How about a high five to keep the energy going? 🙌 Let's do this!" << std::endl;
}
