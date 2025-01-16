/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:04:50 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/16 15:36:30 by aavduli          ###   ########.fr       */
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
		~ScavTrap();

	void	guardGate();
};


#endif
