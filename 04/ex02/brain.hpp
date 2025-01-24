/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:06:02 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/21 16:07:28 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	protected:
		std::string idea[100];
	public:
		Brain();
		Brain(const Brain &other);
		Brain &operator=(const Brain &rhs);
		~Brain();

		void setIdea(int index, const std::string &_idea);
		std::string getIdea(int index);
};

#endif
