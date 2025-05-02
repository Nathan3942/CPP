/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:07:21 by njeanbou          #+#    #+#             */
/*   Updated: 2025/04/10 14:32:22 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm("ShrubberyCreationForm", 145, 137), _target(copy._target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm& equal)
{
    if (this != &equal)
    {
        this->_target = equal._target;
    }
    return (*this);
}

void    ShrubberyCreationForm::execForm() const
{
    std::ofstream file((this->_target + std::string("_shrubbery")).c_str());

    if (!file)
    {
        std::cerr << "Error open file!" << std::endl;
        return;
    }

    file << "       *       \n";
    file << "      ***      \n";
    file << "     *****     \n";
    file << "    *******    \n";
    file << "   *********   \n";
    file << "  ***********  \n";
    file << " ************* \n";
    file << "      |||      \n";
    file << "      |||      \n\n";
    file << "       *       \n";
    file << "      ***      \n";
    file << "     *****     \n";
    file << "    *******    \n";
    file << "   *********   \n";
    file << "  ***********  \n";
    file << " ************* \n";
    file << "      |||      \n";
    file << "      |||      \n";
    
    file.close();
    return;
}
