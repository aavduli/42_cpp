/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:51:04 by aavduli           #+#    #+#             */
/*   Updated: 2025/03/05 14:57:16 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {

	{
		std::cout << "===== Shrubbery test =======" << std::endl;
		Bureaucrat b1("Alexis", 100);
		ShrubberyCreationForm sc1("Garden");
		sc1.beSigned(b1);
		sc1.execute(b1);
	}
}
