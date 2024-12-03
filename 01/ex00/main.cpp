/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:16:40 by aavduli           #+#    #+#             */
/*   Updated: 2024/12/02 16:29:59 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	
	std::cout << "testing class" << std::endl;
	Zombie Zmb1("Courage");
	Zmb1.announce();

	std::cout << "testing heap" << std::endl;
	Zombie *Zmb2 = newZombie("Froussard");
	Zmb2->announce();
	delete(Zmb2);

	std::cout << "testing stack" << std::endl;
	randomChump("Le chien");

	return 0;
}
