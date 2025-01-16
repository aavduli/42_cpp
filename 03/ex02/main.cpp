/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:13:00 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/16 16:08:40 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main() {

	{
		FragTrap Fragi("Chill guy");
		Fragi.attack("World Boss");
		Fragi.highFiveGuys();
	}

	return 0;
}
