/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:51:04 by aavduli           #+#    #+#             */
/*   Updated: 2025/03/31 11:54:23 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main() {
	
	try {
		Intern intern;
		Bureaucrat boss("Boss", 1);

		AForm* form1 = intern.makeForm("shrubbery creation", "Garden");
		AForm* form2 = intern.makeForm("robotomy request", "Alice");
		AForm* form3 = intern.makeForm("presidential pardon", "Bob");
		AForm* form4 = intern.makeForm("invalid form", "Test");

		if (form1) {
			boss.signForm(*form1);
			boss.execForm(*form1);
			delete form1;
		}
		if (form2) {
			boss.signForm(*form2);
			boss.execForm(*form2);
			delete form2;
		}
		if (form3) {
			boss.signForm(*form3);
			boss.execForm(*form3);
			delete form3;
		}

		if (form4) {
			delete form4;
		}
	}
	catch (std::exception &e) {
		std::cerr << "Exceptions: " << e.what() << std::endl;
	}

	return 0;
}
