/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:23:16 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/12 13:49:14 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _signed(false), _signGrade(50), _exGrade(100)
{
	
}

Form::Form(std::string name, int signGrade, int exGrade) : _name(name), _signGrade(signGrade), _exGrade(exGrade), _signed(false)
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

Form::Form(const Form& copy) : _name(copy._name), _signed(copy._signed), _signGrade(copy._signGrade), _exGrade(copy._exGrade)
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

Form::~Form()
{
	
}

void	Form::beSigned(const Bureaucrat& bur)
{
	if (bur.getGrade() > this->_signGrade)
		throw GradeTooLowException();
	else 
		this->_signed = true;
}

const std::string	Form::getName() const
{
	return (this->_name);
}

int	Form::getSignGrade() const
{
	return (this->_signGrade);
}

int	Form::getExGrade() const
{
	return (this->_exGrade);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Form : Grade too high!");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Form : grade too low!");
}

std::ostream&	operator<<(std::ostream& out, const Form& form)
{
	out << form.getName() <<  ", sign grade : " << form.getSignGrade() << ", ex grade : " << form.getExGrade() << ", signed status : " << form.getSigned();
	return (out);
}