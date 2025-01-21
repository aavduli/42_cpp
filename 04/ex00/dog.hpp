/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:00:44 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/21 14:37:10 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &rhs);
	~Dog();

	void makeSound() const;
};

#endif
