/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:46:44 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/16 16:09:00 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"


class FragTrap : public ClapTrap {
	private:

	public:
		FragTrap();
		FragTrap(const std::string& _name);
		FragTrap(const FragTrap& other);
		~FragTrap();
		
		void highFiveGuys();
};


#endif
