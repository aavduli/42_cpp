/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:34:39 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/09 18:13:55 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;

	public:
		Fixed();
		Fixed(const Fixed &src);
		Fixed(const int value);
		Fixed(const float value);
		
		Fixed operator=(const Fixed &rhs);
		//comparaison
		bool operator==(const Fixed &rhs);
		bool operator>=(const Fixed &rhs);
		bool operator<=(const Fixed &rhs);
		bool operator!=(const Fixed &rhs);
		bool operator>(const Fixed &rhs);
		bool operator<(const Fixed &rhs);

		//arithmetique
		Fixed operator+(const Fixed &rhs);
		Fixed operator-(const Fixed &rhs);
		Fixed operator*(const Fixed &rhs);
		Fixed operator/(const Fixed &rhs);

		//incrementation et decrementation
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);

		//comparaison
		static Fixed &min(Fixed &lhs, Fixed &rhs);
		static const Fixed &min(const Fixed &lhs, const Fixed &rhs);
		static Fixed &max(Fixed &lhs, Fixed &rhs);
		static const Fixed &max(const Fixed &lhs, const Fixed &rhs);
		~Fixed();
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int 	toInt(void) const;

		friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
};

#endif


