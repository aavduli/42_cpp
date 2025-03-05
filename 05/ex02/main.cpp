/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:51:04 by aavduli           #+#    #+#             */
/*   Updated: 2025/03/05 16:58:00 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

	{
		try {
			std::cout << "====== Shrubbery test =======" << std::endl;
			Bureaucrat b1("President", 1);
			ShrubberyCreationForm sc1("Garden");
			sc1.beSigned(b1);
			sc1.execute(b1);
			std::cout << "Shrubbery has been successful, check the file Garden_shrubbery." << std::endl;
			
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
		catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
	}
	{
		Bureaucrat b1("Stagiaire", 150);
		ShrubberyCreationForm sc1("Garden");
		RobotomyRequestForm rb1("Robot");
		PresidentialPardonForm pp1("what");
		try {
			std::cout << "\n";
			std::cout << "======= Fail Shrubbery =======" << std::endl;
			sc1.beSigned(b1);
			sc1.execute(b1);
			
		}
		catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try {
			std::cout << "\n";
			std::cout << "====== Fail Robotomy ======" << std::endl;
			rb1.beSigned(b1);
			rb1.execute(b1);
		}
		catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try {
			std::cout << "\n";
			std::cout << "==== Fail Presidential ====" << std::endl;
			PresidentialPardonForm pp1("what");
			pp1.beSigned(b1);
			pp1.execute(b1);
		}
		catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try {
			std::cout << "====== Not signed test ======" << std::endl;
			std::cout << "i will not test every Form, i'm to lazy." << std::endl;
			sc1.execute(b1);
		}
		catch (const std::exception &e) {
			std::cerr << "Exception: " << e.what() << std::endl;
		} 
	}
	std::cout << "========= End of test =======" << std::endl;
	return 0;
}
