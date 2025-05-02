/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:47:28 by njeanbou          #+#    #+#             */
/*   Updated: 2025/04/10 15:09:51 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main ()
{
	try
	{		
		Bureaucrat b1("Bob", 100);
		AForm	*f1 = NULL;
		Intern	*i1 = new Intern;

		f1 = i1->makeForm("ShrubberyCreationForm", "tree");

		// ShrubberyCreationForm form("tree");

		b1.signForm(*f1);
		b1.executeAForm(*f1);

		delete f1;
		delete i1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat b1("Carl", 45);
		AForm	*f1 = NULL;
		Intern *i1 = new Intern;

		f1 = i1->makeForm("RobotomyRequestForm", "robo");
		// RobotomyRequestForm form("brr");

		b1.signForm(*f1);
		b1.executeAForm(*f1);

		delete f1;
		delete i1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat b1("Kaka", 5);
		AForm	*f1 = NULL;
		Intern	*i1 = new Intern;

		f1 = i1->makeForm("PresidentialPardonForm", "pres");
		// PresidentialPardonForm form("pres");

		b1.signForm(*f1);
		b1.executeAForm(*f1);

		delete f1;
		delete i1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	return (0);
}