/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:42:26 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/20 18:15:37 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default")
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = copy._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm : destructor called" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& equal)
{
	if (this != &equal)
		this->_target = equal._target;
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void	ShrubberyCreationForm::tree(const Bureaucrat& bur)
{
	if (bur.getGrade() > this->getSignGrade())
		throw (Bureaucrat::GradeTooLowException());
	else if (this->getSigned() == false)
		throw (AForm::NotSignedException());
	else
	{
		std::ofstream outFile((this->_target + std::string("_shrubbery")).c_str());
		for (int i = 0; i < 5; i++)
		{
			outFile << "    /\\    \n";
			outFile << "   /  \\   \n";
			outFile << "  /    \\  \n";
			outFile << " /      \\ \n";
			outFile << "/________\\\n";
			outFile << "    ||    \n";
			outFile << "    ||    \n";
			outFile << "    ||    \n";
			outFile << std::endl;
		}
		outFile.close();
	}
}

int	ShrubberyCreationForm::execute(const Bureaucrat& bur) const
{
	if (this->getSigned() == false)
		return (1);
	if (bur.getGrade() > this->getExGrade())
		return (2);
	return (0);
}

std::ofstream&	operator<<(std::ofstream& out, ShrubberyCreationForm& form)
{
	out << form.getName() << ", target : " << form.getTarget();
	return (out);
}
