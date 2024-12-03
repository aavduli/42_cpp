/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:43:28 by aavduli           #+#    #+#             */
/*   Updated: 2024/12/03 14:38:00 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"
#include <sstream>

std::string InToString(int number) {
	std::ostringstream oss;
	oss << number;
	return oss.str();
}

Zombie* zombieHorde(int n, std::string namePrefix) {
	if (n <= 0) {
		std::cout << "Number of zombies must be greater than 0" << std::endl;
		return NULL;
	}
	Zombie* horde = new Zombie[n];
	for (int i = 0; i < n; ++i) {
		horde[i].setName(namePrefix + InToString(i + 1));
	}
	return (horde);
}
