/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:32:18 by aavduli           #+#    #+#             */
/*   Updated: 2024/12/09 15:18:38 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB {
	private: 
		std::string name;
		Weapon &weapon;
	public:
		HumanB(std::string name, Weapon &weapon);
		~HumanB();
		void attack();
		void setName(std::string name);
		std::string getName();
};
