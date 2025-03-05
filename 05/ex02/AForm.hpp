/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:54:33 by aavduli           #+#    #+#             */
/*   Updated: 2025/03/03 15:48:42 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string	_name;
		bool				_signed;
		int					_gradeToSign;
		int					_gradeToExec;
	public:
		AForm();
		AForm(const std::string name, const int gradeToSign, const int gradeToExec);
		AForm(const AForm &other);
		virtual ~AForm();

	AForm 			&operator=(const AForm &rhs);
	void 			beSigned(const Bureaucrat& b);
	virtual void	execute(Bureaucrat const &executor) const = 0;

	std::string 	getName() const;
	int				getSigned() const;
	int				getGradeToExec() const;
	bool 			isSigned() const;

	class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
	};
	class GradeTooHighException : public std::exception {
		public:
			const char *what() const throw();
	};
	class FormNotSignedException : public std::exception {
		public:
			const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const AForm &b);


#endif
