/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:31:28 by aavduli           #+#    #+#             */
/*   Updated: 2024/12/09 15:17:54 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"


class Weapon {
	private:
		std::string name;
		std::string type;
	public:
		Weapon(const std::string &name, const std::string &type);
		~Weapon();
		const std::string& getType() const;
		void setType (std::string newType);	
};

#endif
