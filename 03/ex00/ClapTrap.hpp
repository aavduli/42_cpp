/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:13:33 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/14 14:42:13 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include "iostream"

class ClapTrap {

	private:
		std::string name;
		int			HP;
		int 		EP;
		int			AD;
	public:
		ClapTrap();
		ClapTrap(std::string& _name);
		~ClapTrap();

	void	setHP(int _HP);
	int		getHP() const;

	void	setEP(int _EP);
	int		getEP() const;

	int		getAD() const;

	std::string	getName() const;

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
