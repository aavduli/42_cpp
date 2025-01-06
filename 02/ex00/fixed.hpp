/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:10:37 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/06 13:19:11 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits;

	public:
		Fixed();
		Fixed(const Fixed &src);
		
		Fixed &operator=(const Fixed &rhs);
		~Fixed();
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
