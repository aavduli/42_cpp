/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:51:04 by aavduli           #+#    #+#             */
/*   Updated: 2025/03/12 09:13:10 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main() {
    Intern intern;
    Bureaucrat boss("Boss", 1);

    // Création de formulaires
    AForm* form1 = intern.makeForm("shrubbery creation", "Garden");
    AForm* form2 = intern.makeForm("robotomy request", "Alice");
    AForm* form3 = intern.makeForm("presidential pardon", "Bob");
    AForm* form4 = intern.makeForm("invalid form", "Test"); // Doit renvoyer NULL

    // Test d'exécution des formulaires créés
    if (form1) {
        form1->beSigned(boss);
        form1->execute(boss);
        delete form1;
    }

    if (form2) {
        form2->beSigned(boss);
        form2->execute(boss);
        delete form2;
    }

    if (form3) {
        form3->beSigned(boss);
        form3->execute(boss);
        delete form3;
    }

    if (form4) {
        delete form4;
    }

    return 0;
}
