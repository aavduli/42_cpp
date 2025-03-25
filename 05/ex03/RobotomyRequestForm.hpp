/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:48:49 by aavduli           #+#    #+#             */
/*   Updated: 2025/03/25 10:47:18 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string _target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string Target);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		~RobotomyRequestForm();

	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
	void execute(const Bureaucrat& executor) const;
	AForm* create(std::string& target);
};

#endif
