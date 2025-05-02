/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:27:16 by njeanbou          #+#    #+#             */
/*   Updated: 2025/04/08 18:41:24 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int signeNote, int execNote) : _name(name), _isSigned(false)
{
    if (signeNote < 1)
        throw GradeTooLow();
    else if (signeNote > 150)
        throw GradeTooHeigh();
    this->_signeNote = signeNote;
    if (execNote < 1)
        throw GradeTooLow();
    else if (execNote > 150)
        throw GradeTooHeigh();
    this->_execNote = execNote;
    this->_isSigned = false;
}

AForm::AForm(const AForm& copy) : _name(copy._name), _isSigned(copy._isSigned)
{
    if (copy._signeNote < 1)
        throw GradeTooLow();
    else if (copy._signeNote > 150)
        throw GradeTooHeigh();
    this->_signeNote = copy._signeNote;
    if (copy._execNote < 1)
        throw GradeTooLow();
    else if (copy._execNote > 150)
        throw GradeTooHeigh();
    this->_execNote = copy._execNote;
}

AForm::~AForm()
{

}

void    AForm::beSigned(Bureaucrat& bur)
{
    if (bur.getGrade() > this->_signeNote)
        throw GradeTooLow();
    else
        this->_isSigned = true;
}

int AForm::execute(const Bureaucrat& executor) const
{
    if (executor.getGrade() > this->_execNote)
        throw GradeTooLow();
    if (this->_isSigned == false)
        throw NotSigned();
    execForm();
    return (0);
}

std::string AForm::getName() const
{
    return (this->_name);
}

bool    AForm::getSigned() const
{
    return (this->_isSigned);
}

int     AForm::getSigneNote() const
{
    return (this->_signeNote);
}

int     AForm::getExecNote() const
{
    return (this->_execNote);
}

const char* AForm::GradeTooHeigh::what() const throw()
{
    return ("Grade too heigh!");
}

const char* AForm::GradeTooLow::what() const throw()
{
    return ("Grade too low!");
}

const char* AForm::NotSigned::what() const throw()
{
    return ("Form not signed!");
}

std::ostream&   operator<<(std::ostream& out, const AForm& Aform)
{
    out << "AForm " << Aform.getName() << " : signe grade " << Aform.getSigneNote() << ", exec grade " << Aform.getExecNote() << ", is signed " << Aform.getSigned() << std::endl;
    return (out);
}

// AForm::GradeTooHeigh::GradeTooHeigh(const std::string& msg) : _msg("Grade " + msg + " too heigh!")
// {

// }

// const char* AForm::GradeTooHeigh::what() const throw()
// {
//     return (_msg.c_str());
// }

// AForm::GradeTooLow::GradeTooLow(const std::string& msg) : _msg("Grade " + msg + " too low!")
// {
    
// }

// const char* AForm::GradeTooLow::what() const throw()
// {
//     return (_msg.c_str());
// }