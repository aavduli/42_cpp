/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:51:04 by aavduli           #+#    #+#             */
/*   Updated: 2025/02/26 13:53:34 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

	{
		std::cout << "======basic test========" << std::endl;
		Bureaucrat charl("Charl", 50);
		std::cout << charl << std::endl;

		charl.promote();
		std::cout << "After promotion : " << charl << std::endl;

		charl.demote();
		std::cout << "After demote: " << charl << std::endl;
	}
	{
		std::cout << "====testing exception====" << std::endl;
		Bureaucrat charl("Charl", 2);
		charl.promote();
		Bureaucrat kastro("Kastro", 150);
		kastro.demote();
	}
	return 0;
}
