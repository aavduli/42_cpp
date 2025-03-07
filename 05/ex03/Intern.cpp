/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 11:43:17 by aavduli           #+#    #+#             */
/*   Updated: 2025/03/06 11:54:18 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern can't have a default constructor." << std::endl;
}

Intern::Intern(const Intern &other) {
	(void)other;
}

Intern::~Intern() {
	std::cout << "Destructor for Intern has been summoned." << std::endl;
}

Intern &Intern::operator=(const Intern& rhs) {
	(void)rhs;
	return *this;
}

AForm* Intern::makeForm(const std::string formName, const std::string target) {
	std::string formNames[] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	AForm* (*formCreators[])(const std::string&) = 
		{&ShrubberyCreationForm::create, &RobotomyRequestForm::create, &PresidentialPardonForm::create};
	for (int i = 0; i < 3; i++)
		if (formName == formNames[i]) {
			std::cout << "Intern creates: " << formName << std::endl;
			return formCreators[i](target);
		}
	std::cerr << "Error form type: " << formName << " isn't recognized" << std::endl;
	return NULL;
}
