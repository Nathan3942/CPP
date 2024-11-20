/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:17:57 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/20 18:18:46 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
	// std::cout << "Bureaucrat : Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name)
{
	if (copy._grade < 1)
		throw GradeTooHighException();
	else if (copy._grade > 150)
		throw GradeTooLowException();
	this->_grade = copy._grade;
	// std::cout << "Bureaucrat : Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat : Default destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& equal)
{
	if (this != &equal)
		this->_grade = equal._grade;
	return (*this);
}

const std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::increment()
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrement()
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::signForm(AForm& form)
{
	if (!&form)
	{
		std::cout << "No form" << std::endl;
		return ;
	}
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
		return ;
	}
	std::cout << this->_name << " signed " << form.getName() << std::endl;
}

void	Bureaucrat::executeForm(const AForm& form)
{
	if (!&form)
	{
		std::cout << "No form" << std::endl;
		return ;
	}
	int resExecute = form.execute(*this);
	if (resExecute == 0)
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	else
		std::cout << this->_name << " can't execut " << form.getName() << std::endl;
	if (resExecute == 1)
		throw (NotSignedException());
	else if (resExecute == 2)
		throw (GradeTooLowException());
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat : Grade too high!");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat : Grade too low!");
}

const char*	Bureaucrat::NotSignedException::what() const throw()
{
	return ("AForm : Not signed!");
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bur)
{
	out << bur.getName() << ", bureaucrat grade " << bur.getGrade();
	return (out); 
}