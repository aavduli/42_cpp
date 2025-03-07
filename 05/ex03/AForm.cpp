#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("Default"), _signed(false), _gradeToSign(0), _gradeToExec(0) {
	// std::cout << "default AForm's constructor called." << std::endl;
}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExec) : 
_name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
	// std::cout << "AForm's constructor called." << std::endl;
	if ((gradeToSign < 1 || gradeToExec < 1))
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &other) :
_name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec) {
	// std::cout << "AForm's copy constructor has been called." << std::endl;
}

AForm::~AForm() {
	// std::cout << "AForm's detructor was called." << std::endl;
}

AForm &AForm::operator=(const AForm &rhs) {
	if (this != &rhs)
	{
		this->_signed = rhs._signed;
		this->_gradeToExec = rhs._gradeToExec;
		this->_gradeToSign = rhs._gradeToSign;
	}
	return *this;
}

void AForm::beSigned(const Bureaucrat& b) {
	if (b.getGrade() > this->_gradeToSign)
	{
		throw GradeTooLowException();
	}
	_signed = true;

}

const char* AForm::GradeTooHighException::what() const throw() {
	return "Grade to high for this Aform. Must be between 1 and 150.";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "Grade is to low for this Aform.";
}

std::string AForm::getName() const{
	return this->_name;
}

int	AForm::getSigned() const {
	return this->_signed;
}

bool AForm::isSigned() const{
	return _signed;
}

int AForm::getGradeToExec() const {
	return this->_gradeToExec;
}

std::ostream& operator<<(std::ostream& os, const AForm &b) {
	os << b.getName();
	return os;
}

const char* AForm::FormNotSignedException::what() const throw() {
	return "Form is not signed!";
}

