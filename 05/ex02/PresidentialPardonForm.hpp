/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:58:33 by aavduli           #+#    #+#             */
/*   Updated: 2025/03/05 14:00:42 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		std::string _target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string Target);
		PresidentialPardonForm(const AForm &other);
		~PresidentialPardonForm();

	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
	void execute(std::string target) const;
};

#endif
