/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:31:28 by aavduli           #+#    #+#             */
/*   Updated: 2024/12/10 15:40:16 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {
	private:
		std::string type;
	public:
		Weapon(const std::string &weaponType);
		~Weapon();
		const std::string& getType() const;
		void setType (const std::string& newType);
};

#endif
