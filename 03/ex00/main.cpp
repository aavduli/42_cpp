/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:13:00 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/14 16:00:24 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {

	{
		std::cout << "---------Basic Test-----------" << std::endl;
		ClapTrap Clapy("Boris");
		ClapTrap copy(Clapy);
		Clapy.takeDamage(8);
		Clapy.attack("World boss");
		Clapy.beRepaired(11);
	}
	{
		std::cout << "-------------------------------" << std::endl;
		std::cout << "------Not enough HP test-------" << std::endl;
		ClapTrap Clap1("Joris");
		Clap1.takeDamage(10);
		Clap1.attack("Biggest ClapTrap ever");
		Clap1.beRepaired(10);
	}
	{
		std::cout << "-------------------------------" << std::endl;
		std::cout << "------Not enough EP test-------" << std::endl;
		ClapTrap Clap1("Koris");
		Clap1.attack("Biggest ClapTrap ever");
		Clap1.attack("Biggest ClapTrap ever");
		Clap1.attack("Biggest ClapTrap ever");
		Clap1.attack("Biggest ClapTrap ever");
		Clap1.attack("Biggest ClapTrap ever");
		Clap1.attack("Biggest ClapTrap ever");
		Clap1.attack("Biggest ClapTrap ever");
		Clap1.attack("Biggest ClapTrap ever");
		Clap1.attack("Biggest ClapTrap ever");
		Clap1.attack("Biggest ClapTrap ever");
		Clap1.attack("Biggest ClapTrap ever");
		Clap1.attack("Biggest ClapTrap ever");
		Clap1.beRepaired(10);
	}

	return 0;
}
