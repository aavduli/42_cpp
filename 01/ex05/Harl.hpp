/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:56:12 by aavduli           #+#    #+#             */
/*   Updated: 2024/12/11 15:13:52 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl {
	
	private :
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public :
		Harl();
		~Harl();
		void complain(std::string level);
};


#endif
