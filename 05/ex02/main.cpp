/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:51:04 by aavduli           #+#    #+#             */
/*   Updated: 2025/03/05 16:37:29 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

	{
		std::cout << "====== Shrubbery test =======" << std::endl;
		Bureaucrat b1("President", 1);
		ShrubberyCreationForm sc1("Garden");
		sc1.beSigned(b1);
		sc1.execute(b1);
		
		std::cout << "\n";
		std::cout << "====== Robotomy test ======" << std::endl;
		RobotomyRequestForm rb1("Robot");
		rb1.beSigned(b1);
		rb1.execute(b1);

		std::cout << "\n";
		std::cout << "==== Presidential test ====" << std::endl;
		PresidentialPardonForm pp1("what");
		pp1.beSigned(b1);
		pp1.execute(b1);
	}
}
