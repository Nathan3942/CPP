/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:23:16 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/12 13:49:14 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _signed(false), _signGrade(50), _exGrade(100)
{
	
}

AForm::AForm(std::string name, int signGrade, int exGrade) : _name(name), _signGrade(signGrade), _exGrade(exGrade), _signed(false)
{
	if (this->_signGrade < 1)
		throw GradeTooHighException();
	else if (this->_signGrade > 150)
		throw GradeTooLowException();
	if (this->_exGrade < 1)
		throw GradeTooHighException();
	else if (this->_exGrade > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm& copy) : _name(copy._name), _signed(copy._signed), _signGrade(copy._signGrade), _exGrade(copy._exGrade)
{
	if (this->_signGrade < 1)
		throw GradeTooHighException();
	else if (this->_signGrade > 150)
		throw GradeTooLowException();
	if (this->_exGrade < 1)
		throw GradeTooHighException();
	else if (this->_exGrade > 150)
		throw GradeTooLowException();
}

AForm::~AForm()
{
	
}

AForm& AForm::operator=(const AForm& equal)
{
	if (this != &equal)
		this->_signed = equal._signed;
	return (*this);
}

void	AForm::beSigned(const Bureaucrat& bur)
{
	if (bur.getGrade() > this->_signGrade)
		throw GradeTooLowException();
	else 
		this->_signed = true;
}

const std::string	AForm::getName() const
{
	return (this->_name);
}

int	AForm::getSignGrade() const
{
	return (this->_signGrade);
}

int	AForm::getExGrade() const
{
	return (this->_exGrade);
}

bool AForm::getSigned() const
{
	return (this->_signed);
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("AForm : Grade too high!");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("AForm : Grade too low!");
}

const char*	AForm::NotSignedException::what() const throw()
{
	return ("AForm : Not signed!");
}

std::ostream&	operator<<(std::ostream& out, const AForm& Aform)
{
	out << Aform.getName() <<  ", sign grade : " << Aform.getSignGrade() << ", ex grade : " << Aform.getExGrade() << ", signed status : " << Aform.getSigned();
	return (out);
}