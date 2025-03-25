/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:51:04 by aavduli           #+#    #+#             */
/*   Updated: 2025/03/25 14:26:23 by aavduli          ###   ########.fr       */
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
		b1.signForm(sc1);
		b1.execForm(sc1);
		std::cout << "Shrubbery has been successful, check the file Garden_shrubbery." << std::endl;
		std::cout << "\n";
		std::cout << "====== Robotomy test ======" << std::endl;
		RobotomyRequestForm rb1("Robot");
		b1.signForm(rb1);
		b1.execForm(rb1);
		std::cout << "\n";
		std::cout << "==== Presidential test ====" << std::endl;
		PresidentialPardonForm pp1("Grace");
		b1.signForm(pp1);
		b1.execForm(pp1);
	}
	{
		Bureaucrat b1("Stagiaire", 4);
		ShrubberyCreationForm sc1("Garden");
		RobotomyRequestForm rb1("Robot");
		PresidentialPardonForm pp1("Grace");
		std::cout << "\n";
		std::cout << "======= Fail Shrubbery =======" << std::endl;
		b1.signForm(sc1);
		b1.execForm(sc1);
		std::cout << "\n";
		std::cout << "====== Fail Robotomy ======" << std::endl;
		b1.signForm(rb1);
		b1.execForm(rb1);
		std::cout << "\n";
		std::cout << "==== Fail Presidential ====" << std::endl;
		b1.signForm(pp1);
		b1.execForm(pp1);
	}
	std::cout << "========= End of test =======" << std::endl;
	return 0;
}
