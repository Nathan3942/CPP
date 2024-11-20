/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:15:05 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/20 19:27:36 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"



int main(void)
{

    try 
    {
        Bureaucrat b1("Bob", 10);

        Intern  *i1 = new Intern();

		AForm *f3 = i1->makeForm("PresidentialPardonForm", "pres");
		AForm *f1 = i1->makeForm("RobotomyRequestForm", "robot");
		AForm *f2 = i1->makeForm("ShrubberyCreationForm", "tree");

		delete i1;
        b1.signForm(*f1);
        b1.signForm(*f2);
        b1.signForm(*f3);
        std::cout << std::endl;
        b1.executeForm(*f1);
		delete f1;
        b1.executeForm(*f2);
		delete f2;
        b1.executeForm(*f3);	
		delete f3;
    }
    catch (std::exception &e)
    {
        std::cout << "Exeption : " << e.what() << std::endl;
    }
    return (0);
}