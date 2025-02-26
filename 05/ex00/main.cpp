/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:51:04 by aavduli           #+#    #+#             */
/*   Updated: 2025/02/26 15:14:39 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

	{
		std::cout << "======basic test========\n" << std::endl;
		Bureaucrat charl("Charl", 50);
		std::cout << charl << std::endl;
		charl.promote();
		std::cout << "After promotion : " << charl << std::endl;
		charl.demote();
		std::cout << "After demote: " << charl << std::endl;
	}
	{
		std::cout << "\n====testing exception====\n" << std::endl;
		{
			try {
				Bureaucrat charl("Charl", 0);
				std::cout << charl << std::endl;
			}
			catch (const std::exception &e) {
				std::cerr << "Exception: " << e.what() << std::endl;
			}
		}
		std::cout << "\n";
		{
			try {
				Bureaucrat kastro("Kastro", 1);
				kastro.promote();
				std::cout << kastro << std::endl;
			}
			catch (const std::exception &e) {
				std::cerr << "Exception: " << e.what() << std::endl; 
			}
		}
	}
	return 0;
}
