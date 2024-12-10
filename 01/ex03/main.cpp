/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:31:09 by aavduli           #+#    #+#             */
/*   Updated: 2024/12/10 16:13:09 by aavduli          ###   ########.fr       */
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

	return 0;
}

// int main()
// {
// {
// 	Weapon club = Weapon("crude spiked club");
// 	HumanA bob("Bob", club);
// 	bob.attack();
// 	club.setType("some other type of club");
// 	bob.attack();
// }
// {
// 	Weapon club = Weapon("crude spiked club");
// 	HumanB jim("Jim");
// 	jim.setWeapon(club);
// 	jim.attack();
// 	club.setType("some other type of club");
// 	jim.attack();
// }
// return 0;
// }
