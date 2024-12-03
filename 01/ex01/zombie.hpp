/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:43:03 by aavduli           #+#    #+#             */
/*   Updated: 2024/12/03 12:04:03 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
	private:
	std::string name;

	public:
	Zombie();
	Zombie(std::string zombieName);
	~Zombie();
	void setName(std::string zombieName);
	void announce (void) const;
};

Zombie* zombieHorde(int n, std::string name);

#endif
