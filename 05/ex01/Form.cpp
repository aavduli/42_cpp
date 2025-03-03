#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Default"), _signed(false), _gradeToSign(0), _gradeToExec(0) {
	// std::cout << "default Form's constructor called." << std::endl;
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExec) : 
_name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
	// std::cout << "Form's constructor called." << std::endl;
	if ((gradeToSign < 1 || gradeToExec < 1))
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &other) :
_name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec) {
	// std::cout << "Form's copy constructor has been called." << std::endl;
}

Form::~Form() {
	// std::cout << "Form's detructor was called." << std::endl;
}

Form &Form::operator=(const Form &rhs) {
	if (this != &rhs)
	{
		this->_signed = rhs._signed;
		this->_gradeToExec = rhs._gradeToExec;
		this->_gradeToSign = rhs._gradeToSign;
	}
	return *this;
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeToSign)
	{
		throw GradeTooLowException();
	}
	_signed = true;

}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade to high for this form. Must be between 1 and 150.";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is to low for this form.";
}

std::string Form::getName() const{
	return this->_name;
}

int	Form::getSigned() const {
	return this->_signed;
}

std::ostream& operator<<(std::ostream& os, const Form &b) {
	os << b.getName();
	return os;
}
