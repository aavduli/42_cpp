/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:58:48 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/16 18:41:44 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int	main() {

	{
	Animal* dog = new Dog();
	Animal* cat = new Cat();

	dog->makeSound();
	cat->makeSound();

	delete (dog);
	delete (cat);
	}
}
