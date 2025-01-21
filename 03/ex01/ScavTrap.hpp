/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:04:50 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/21 14:28:02 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	
	private:
		std::string name;
	public:
		ScavTrap();
		ScavTrap(const std::string& _name);
		ScavTrap(const ScavTrap& other);
		ScavTrap &operator=(const ScavTrap &rhs);
		~ScavTrap();

	void	attack(const std::string& target);
	void	guardGate();
};


#endif
