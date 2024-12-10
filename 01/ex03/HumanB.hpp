/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:45:42 by aavduli           #+#    #+#             */
/*   Updated: 2024/12/10 15:45:44 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB {
	private: 
		std::string name;
		Weapon *weapon;
	public:
		HumanB(const std::string &name);
		~HumanB();
		void setWeapon(Weapon &weapon);
		void attack() const;
		void setName(const std::string &newName);
		std::string getName() const;
};

#endif
