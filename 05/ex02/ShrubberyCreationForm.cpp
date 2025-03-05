/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:01:27 by aavduli           #+#    #+#             */
/*   Updated: 2025/03/05 16:10:39 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm() : _target("Unknown") {
	// std::cout << "Please don't use default constructor and insert a target." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	// std::cout << "Shrubbery Form created Succefuly" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : 
AForm(other), _target(other._target) {
	// std::cout << "ShrubberyCreationForm's copy constructor has been called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	// std::cout << "ShrubberyCreationForm's detructor was called." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
	if (this != &rhs) {
		this->_target = rhs._target;
	}
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (!isSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > getGradeToExec())
		throw GradeTooLowException();
	std::ofstream file;
	file.open((_target + "_shrubbery").c_str());
    file << "      /\\            /\\      " << std::endl;
    file << "     /  \\          /  \\     " << std::endl;
    file << "    /____\\        /____\\    " << std::endl;
    file << "      ||            ||    " << std::endl;
    file.close();
}
