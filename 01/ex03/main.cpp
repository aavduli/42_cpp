/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:31:09 by aavduli           #+#    #+#             */
/*   Updated: 2024/12/10 15:59:58 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
	std::cout << "test 1 -------------------------------" << std::endl;
	Weapon sword = Weapon("sword");
	std::cout << "Weapon type: " << sword.getType() << std::endl;
	HumanA hero ("Arthur", sword);
	hero.attack();

	std::cout << std::endl;

	std::cout << "test 2 -------------------------------" << std::endl;
	Weapon glaives = Weapon("glaives");
	std::cout << "Weapon type: " << glaives.getType() << std::endl;
	HumanB zero("Ilizael");
	zero.attack();
	zero.setWeapon(glaives);
	zero.attack();

	std::cout << std::endl;
}
