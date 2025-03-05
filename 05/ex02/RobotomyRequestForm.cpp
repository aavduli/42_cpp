/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:02:38 by aavduli           #+#    #+#             */
/*   Updated: 2025/03/05 16:39:40 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : _target("Unknown") {
	// std::cout << "Please don't use default constructor and insert a target." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 145, 137), _target(target) {
	// std::cout << "Shrubbery Form created Succefuly" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : 
AForm(other), _target(other._target) {
	// std::cout << "RobotomyRequestForm's copy constructor has been called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	// std::cout << "RobotomyRequestForm's detructor was called." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	if (this != &rhs) {
		this->_target = rhs._target;
	}
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const{
	if (!isSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > getGradeToExec())
		throw GradeTooLowException();
	std::cout << "Bzzz Bzzz ..... Drilling noise...." << std::endl;
	if (rand() % 2)
		std::cout << _target << " has been successfuly robotomized!" << std::endl;
	else {
		std::cout << "Robotomy has failed on: " << _target << std::endl;
	}
}
