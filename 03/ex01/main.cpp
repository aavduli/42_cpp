/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:13:00 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/16 15:42:46 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main() {

	{
		ScavTrap Scavi("Serena");
		Scavi.attack("World Boss");
		Scavi.guardGate();
	}

	return 0;
}
