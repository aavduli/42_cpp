/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:00:41 by aavduli           #+#    #+#             */
/*   Updated: 2025/02/24 13:47:42 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "brain.hpp"

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(const std::string& _type);
		Animal(const Animal& _other);
		Animal &operator=(const Animal &rhs);
		virtual ~Animal();

		Brain* getBrain() const;
		std::string getType();

		virtual void makeSound() const;
		virtual std::string getIdea(int index) const;
};

#endif
