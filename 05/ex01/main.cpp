/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:51:04 by aavduli           #+#    #+#             */
/*   Updated: 2025/03/05 13:24:04 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	{
		std::cout << "\n";
		std::cout << "==== test for valid and too low Form ===" << std::endl;
		 try {
			Form validForm("Contract", 50, 50);
			std::cout << "Form created succefuly: " << validForm.getName() << std::endl;
			Bureaucrat b1("Alexis", 1);
			b1.signForm(validForm);
			Bureaucrat b2("Stagiaire", 148);
			b2.signForm(validForm);
			Form tooHigh("Trash", 151, 50);
		 }
		 catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		 }
	}
		std::cout << "\n";
		std::cout << "========== Test too high Form ==========" << std::endl;
	{
		try {
			Form tooLow("Trash", 0, 0);
			std::cout << "Form created succefuly: " << tooLow.getName() << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
	}
	std::cout << "\n";
	return 0;
}
