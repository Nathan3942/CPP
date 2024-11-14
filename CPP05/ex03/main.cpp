/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:15:05 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/14 18:22:27 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
// #include "PresidentialPardonForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "ShrubberyCreationForm.hpp"

int main(void)
{

    try 
    {
        Bureaucrat b1("Bob", 20);
        Intern  *i1 = new Intern();
        AForm *f3 = i1->makeForm("PresidentialPardonForm", "pres");
		AForm *f1 = i1->makeForm("RobotomyRequestForm", "robot");
		AForm *f2 = i1->makeForm("ShrubberyCreationForm", "tree");

        b1.signForm(*f1);
        b1.signForm(*f2);
        b1.signForm(*f3);
        std::cout << std::endl;
        std::cout << std::endl;
        f2.tree(b1);
        f3.pardon(b1);
        std::cout << std::endl;
        b1.executeForm(f1);
        b1.executeForm(f2);
        b1.executeForm(f3);
    }
    catch (std::exception &e)
    {
        std::cout << "Exeption : " << e.what() << std::endl;
    }

    return (0);
}