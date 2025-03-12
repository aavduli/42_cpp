/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:29:20 by aavduli           #+#    #+#             */
/*   Updated: 2025/03/12 08:44:58 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : _target("Unknown") {
	// std::cout << "Please don't use default constructor and insert a target." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
	// std::cout << "Shrubbery Form created Succefuly" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : 
AForm(other), _target(other._target) {
	// std::cout << "PresidentialPardonForm's copy constructor has been called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	// std::cout << "PresidentialPardonForm's detructor was called." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
	if (this != &rhs) {
		this->_target = rhs._target;
	}
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const{
	if (!isSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > getGradeToExec())
		throw GradeTooLowException();
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

AForm* PresidentialPardonForm::create(std::string& target) {
	return new PresidentialPardonForm(target);
}
