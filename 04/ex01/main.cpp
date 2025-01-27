/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:58:48 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/27 13:24:38 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int	main() {

	int arraySize = 2;
	Animal*	_animal[arraySize];

	for(int i = 0; i < arraySize / 2; ++i)
		_animal[i] = new Dog();
	for (int i = arraySize / 2; i < arraySize; ++i)
		_animal[i] = new Cat();
	for (int i = 0; i < 2; ++i) {
        if (Dog* dog = dynamic_cast<Dog*>(_animal[i])) {
            std::cout << "Dog's Idea 0: " << dog->getIdea(0) << std::endl;
            std::cout << "Dog's Idea 1: " << dog->getIdea(1) << std::endl;
            std::cout << "Dog's Idea 2: " << dog->getIdea(2) << std::endl;
        } else if (Cat* cat = dynamic_cast<Cat*>(_animal[i])) {
            std::cout << "Cat's Idea 0: " << cat->getIdea(0) << std::endl;
            std::cout << "Cat's Idea 1: " << cat->getIdea(1) << std::endl;
            std::cout << "Cat's Idea 2: " << cat->getIdea(2) << std::endl;
		}
	}
	for (int i = 0; i < arraySize; ++i)
		delete _animal[i];
	return 0;
}
