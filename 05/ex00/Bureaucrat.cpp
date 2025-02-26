/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:51:06 by aavduli           #+#    #+#             */
/*   Updated: 2025/02/26 12:03:31 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)  {
	std::cout << "Default constructor for Bureaucrat was called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat constructor was called." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade) {
	std::cout << "Copy constructor for Bureaucrat was called." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
	if (this != &rhs) {
		this->_grade = rhs._grade;
	}
	return *this;
	std::cout << "Copy assignement operator called." << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat's destructor was called." << std::endl;
}

std::string Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

void Bureaucrat::promote() {
	if (_grade -1 < 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::demote() {
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	_grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is to high! Must be between 1 and 150.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is to low! Must be between 1 and 150.";
}


std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", Bureaucrate grade: " << b.getGrade() << ".";
	return os;
}
