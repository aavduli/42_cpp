/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:32:10 by aavduli           #+#    #+#             */
/*   Updated: 2024/12/10 15:31:44 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA {
	private: 
		std::string name;
		Weapon& weapon;
	public:
		HumanA(const std::string &name, Weapon &weapon);
		~HumanA();
		void attack() const;
		void setName(const std::string &newName);
		std::string getName() const;
};

#endif
