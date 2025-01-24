/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:58:48 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/24 12:38:23 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int	main() {
	Cat cat;
	Dog dog;

	Animal mixedAnimal(dog, cat);
	for (int i = 0; i < 100; ++i)
		std::cout << "Mixed animal's idea: " << i << mixedAnimal.getBrain()->getIdea(i) << std::endl;
	return 0;
}
