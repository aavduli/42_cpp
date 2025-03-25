/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 11:43:17 by aavduli           #+#    #+#             */
/*   Updated: 2025/03/25 10:55:40 by aavduli          ###   ########.fr       */
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
AForm* creatShrubbery(std::string target) {
	return new ShrubberyCreationForm(target);
}

AForm* creatRobotomy(std::string target) {
	return new RobotomyRequestForm(target);
}

AForm* creatPresidential(std::string target) {
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) {
	std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm* (*formCreators[3])(const std::string) = {creatShrubbery, creatRobotomy, creatPresidential};
	for (int i = 0; i < 3; i++)
		if (formName == formNames[i]) {
			std::cout << "Intern creates: " << formName << std::endl;
			return formCreators[i](target);
		}
	std::cerr << "Error form type: " << formName << " isn't recognized" << std::endl;
	return NULL;
}
