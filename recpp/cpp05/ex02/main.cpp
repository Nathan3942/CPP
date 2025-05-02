/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:47:28 by njeanbou          #+#    #+#             */
/*   Updated: 2025/04/10 14:31:27 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main ()
{
	try
	{
		// Bureaucrat b1("Bob", 130);
		
		// ShrubberyCreationForm f1("Tree");
		// RobotomyRequestForm f2("Robo");
		// PresidentialPardonForm f3("Pres");

		// b1.signForm(f1);
		// b1.signForm(f2);
		// b1.signForm(f3);

		// b1.executeAForm(f1);
		// b1.executeAForm(f2);
		// b1.executeAForm(f3);
		
		Bureaucrat b1("Bob", 100);

		ShrubberyCreationForm form("tree");

		b1.signForm(form);
		b1.executeAForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat b1("Carl", 45);

		RobotomyRequestForm form("brr");

		b1.signForm(form);
		b1.executeAForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat b1("Kaka", 5);

		PresidentialPardonForm form("pres");

		b1.signForm(form);
		b1.executeAForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	return (0);
}