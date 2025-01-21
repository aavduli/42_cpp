/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:58:48 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/21 14:03:42 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main() {

	{
		Animal*	ani = new Animal();
		Animal* dog = new Dog();
		Animal* cat = new Cat();
		WrongAnimal* Wcat = new WrongCat();

		std::cout << "------ getType-------" << std::endl;

		std::cout << ani->getType() << " " << std::endl;
		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		std::cout << Wcat->getType() << " " << std::endl;

		std::cout << "-----makeSound------" <<std::endl;

		ani->makeSound();
		dog->makeSound();
		cat->makeSound();
		Wcat->makeSound();

		std::cout << "----ending test----" << std::endl;
		
		delete (Wcat);
		delete (dog);
		delete (cat);
	}
	return 0;
}
