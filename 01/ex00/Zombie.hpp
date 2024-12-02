/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:17:04 by aavduli           #+#    #+#             */
/*   Updated: 2024/12/02 16:08:15 by aavduli          ###   ########.fr       */
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
	Zombie(std::string zombieName);
	~Zombie();
	void announce (void);
};

Zombie randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif
