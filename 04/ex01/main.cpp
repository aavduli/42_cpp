/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:58:48 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/22 14:50:35 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main() {
	
	const int array_size = 6;

	Animal* _animal[array_size];
	
	for(int i = 0; i < array_size / 2; ++i) {
		_animal[i] = new Dog();
	}
	for (int i = array_size / 2; i < array_size; ++i) {
		_animal[i] = new Cat();
	}
	std::cout << " " << std::endl;
	std::cout << "-------displaying idea---------" << std::endl;
	for (int i = 0; i < array_size; ++i) {
		std::cout << "Animals idea : " << i << " is " << _animal[i]->getIdea(i) << std::endl;
	}
	std::cout << " " << std::endl;
	std::cout << "-------deleting animals--------" << std::endl;
	for (int i = 0; i < array_size; ++i){
		delete _animal[i];
	}
	return 0;
}
