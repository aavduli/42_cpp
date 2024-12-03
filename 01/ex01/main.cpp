/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:42:49 by aavduli           #+#    #+#             */
/*   Updated: 2024/12/03 14:38:07 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int	main() {

	int numZombie = 5;
	std::string namePrefix = "Zombie_";
	
	Zombie* horde = zombieHorde(numZombie, namePrefix);
	if (horde != NULL) {
		for (int i = 0; i < numZombie; ++i) {
			horde[i].announce();
		}
		delete[] horde;
	}
	return 0;
}
