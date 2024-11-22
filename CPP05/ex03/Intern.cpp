/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:33:06 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/22 18:46:34 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	
}

Intern::Intern(const Intern& copy)
{
	*this = copy;
}

Intern::~Intern()
{
	std::cout << "Intern : Destructor called" << std::endl;
}

static AForm*	makePresident(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

static AForm*	makeRobot(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm*	makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm*	Intern::makeForm(const std::string formName, const std::string target)
{
	AForm	*(*all_form[])(const std::string target) = {&makePresident, &makeRobot, &makeShrubbery};
	std::string form[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

	for (int i = 0; i < 3; i++)
	{
		if (form[i].compare(formName) == 0)
		{
			std::cout << "Intern create " << formName << std::endl;
			return (all_form[i](target));
		}
	}
	std::cout << "Intern can't create " << formName << std::endl << "Bad form name!" << std::endl;
	return (nullptr);
}