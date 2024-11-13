/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:15:05 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/13 21:36:04 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{

    try 
    {
        Bureaucrat b1("Bob", 20);
        RobotomyRequestForm f1("David");
        ShrubberyCreationForm f2("kaka");
        PresidentialPardonForm f3("boba");

        b1.signForm(f1);
        b1.signForm(f2);
        b1.signForm(f3);
        std::cout << std::endl;
        f1.robotization(b1);
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