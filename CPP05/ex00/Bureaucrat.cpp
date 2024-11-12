/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:17:57 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/12 12:01:07 by njeanbou         ###   ########.fr       */
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
	std::cout << "Bureaucrat : Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name)
{
	if (copy._grade < 1)
		throw GradeTooHighException();
	else if (copy._grade > 150)
		throw GradeTooLowException();
	this->_grade = copy._grade;
	std::cout << "Bureaucrat : Copy constructor called" << std::endl;
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

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bur)
{
	out << bur.getName() << ", bureaucrat grade " << bur.getGrade();
	return (out); 
}