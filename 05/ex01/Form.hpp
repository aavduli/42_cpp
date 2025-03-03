/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:54:33 by aavduli           #+#    #+#             */
/*   Updated: 2025/03/03 15:48:42 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form {
	private:
		const std::string	_name;
		bool				_signed;
		int			_gradeToSign;
		int			_gradeToExec;
	public:
		Form();
		Form(const std::string name, const int gradeToSign, const int gradeToExec);
		Form(const Form &other);
		~Form();

	Form &operator=(const Form &rhs);
	void beSigned(const Bureaucrat& bureaucrat);

	std::string getName() const;
	int			getSigned() const;

	class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
	};
	class GradeTooHighException : public std::exception {
		public:
			const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Form &b);


#endif
