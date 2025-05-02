/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:35:14 by njeanbou          #+#    #+#             */
/*   Updated: 2025/04/10 15:00:43 by njeanbou         ###   ########.fr       */
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

}

Intern& Intern::operator=(const Intern& equal)
{
    if (this != &equal)
    {

    }
    return (*this);
}

AForm*  makeShrubbery(const std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm*  makeRobotomy(const std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm*  makePresidential(const std::string target)
{
    return (new PresidentialPardonForm(target));
}

AForm*  Intern::makeForm(std::string formName, std::string formTarget)
{
    AForm   *(*all_form[])(const std::string target) = {&makeShrubbery, &makeRobotomy, &makePresidential};
    std::string form[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

    for (int i = 0; i < 3; i++)
    {
        if (form[i] == formName)
        {
            std::cout << "Intern creat " << formName << std::endl;
            return (all_form[i](formTarget));
        }
    }
    std::cout << "Intern cannot creat form with " << formName << " name!" << std::endl;
    return (NULL);
}
