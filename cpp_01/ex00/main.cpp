/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:16:40 by aavduli           #+#    #+#             */
/*   Updated: 2024/11/28 14:34:03 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	
	Zombie zombie1("Floriano");
	zombie1.announce();
	
	Zombie zombie2("Avdul");
	zombie2.announce();
}
