/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:31:33 by aavduli           #+#    #+#             */
/*   Updated: 2024/11/19 16:13:00 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < ac; i++) {
		for (int j = 0; av[i][j] != '\0'; j++) {
			std::cout << (char)std::toupper(av[i][j]);
		}
		if (i < ac - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
	return 0;
}
