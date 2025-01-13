/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:13:33 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/13 14:39:59 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include "iostream"

class ClapTrap {

	private:
		std::string Name;
		int			HP;
		int 		EP;
		int			AD;
	public:
		ClapTrap(const std::string& name, int HP, int EP, int AD);
		~ClapTrap();

	void	setHP(int HP);
	void	getHP() const;

	void	setEP(int EP);
	void	getEP() const;

	void	setAD(int AD);
	void	getAD() const;

	void	setName(const std::string& name);
	std::string	getName() const;

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
