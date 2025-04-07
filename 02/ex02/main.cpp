/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:34:50 by aavduli           #+#    #+#             */
/*   Updated: 2025/04/07 14:42:16 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

int	main() {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "1: " << a << std::endl;
	std::cout << "2: " << ++a << std::endl;
	std::cout << "3: " << a << std::endl;
	std::cout << "4: " <<  a++ << std::endl;
	std::cout << "5: " << a << std::endl;

	std::cout << "6: " << b << std::endl;
	
	std::cout << "7: " << Fixed::max(a, b) << std::endl;
	return 0;
}

// int main() {
//     // **Constructeurs**
//     Fixed a;
//     Fixed  b(5.05f); // Float constructor
//     Fixed  c(2);     // Int constructor

//     std::cout << "Testing constructors:" << std::endl;
//     std::cout << "Default constructor (a): " << a << std::endl;
//     std::cout << "Float constructor (b): " << b << std::endl;
//     std::cout << "Int constructor (c): " << c << std::endl;

//     // **Opérateurs d'arithmétique**
//     std::cout << "\nTesting arithmetic operators:" << std::endl;
//     Fixed  d = b * c;
//     Fixed  e = b + c;
//     Fixed  f = b - c;
//     Fixed  g = b / c;

//     std::cout << "b * c: " << d << std::endl;
//     std::cout << "b + c: " << e << std::endl;
//     std::cout << "b - c: " << f << std::endl;
//     std::cout << "b / c: " << g << std::endl;

//     // **Opérateurs de comparaison**
//     std::cout << "\nTesting comparison operators:" << std::endl;
//     std::cout << "b == c: " << (b == c) << std::endl;
//     std::cout << "b != c: " << (b != c) << std::endl;
//     std::cout << "b < c: " << (b < c) << std::endl;
//     std::cout << "b > c: " << (b > c) << std::endl;
//     std::cout << "b <= c: " << (b <= c) << std::endl;
//     std::cout << "b >= c: " << (b >= c) << std::endl;

//     // **Opérateurs d'incrémentation**
//     std::cout << "\nTesting increment operators:" << std::endl;
//     std::cout << "a (before increment): " << a << std::endl;
//     std::cout << "++a: " << ++a << std::endl;
//     std::cout << "a (after pre-increment): " << a << std::endl;
//     std::cout << "a++: " << a++ << std::endl;
//     std::cout << "a (after post-increment): " << a << std::endl;

//     // **max et min**
//     std::cout << "\nTesting max and min functions:" << std::endl;
//     std::cout << "Max of b and c: " << Fixed::max(b, c) << std::endl;
//     std::cout << "Min of b and c: " << Fixed::min(b, c) << std::endl;

//     // **Combinaison**
//     std::cout << "\nComplex expression test:" << std::endl;
//     Fixed  h = Fixed(5.05f) * Fixed(2);
//     std::cout << "h (5.05 * 2): " << h << std::endl;
//     std::cout << "Max of a and h: " << Fixed::max(a, h) << std::endl;

//     return 0;
// }
