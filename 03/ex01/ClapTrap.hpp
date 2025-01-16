/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:13:33 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/16 15:33:13 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include "iostream"

class ClapTrap {

	private:
		std::string 	name;
		unsigned int	HP;
		unsigned int 	EP;
		unsigned int	AD;
	public:
		ClapTrap();
		ClapTrap(const std::string& _name);
		ClapTrap(const ClapTrap& other);
		~ClapTrap();

	void	setHP(int _HP);
	int		getHP() const;

	void	setEP(int _EP);
	int		getEP() const;

	void	setAD(int _AD);
	int		getAD() const;

	void setName(const std::string& _name);
	std::string	getName() const;

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
