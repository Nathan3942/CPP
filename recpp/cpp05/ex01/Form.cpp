/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:27:16 by njeanbou          #+#    #+#             */
/*   Updated: 2025/04/08 18:41:24 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signeNote, int execNote) : _name(name), _isSigned(false)
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

Form::Form(const Form& copy) : _name(copy._name), _isSigned(copy._isSigned)
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

Form::~Form()
{

}

void    Form::beSigned(Bureaucrat& bur)
{
    if (bur.getGrade() > this->_signeNote)
        throw GradeTooLow();
    else
        this->_isSigned = true;
}

std::string Form::getName() const
{
    return (this->_name);
}

bool    Form::getSigned() const
{
    return (this->_isSigned);
}

int     Form::getSigneNote() const
{
    return (this->_signeNote);
}

int     Form::getExecNote() const
{
    return (this->_execNote);
}

const char* Form::GradeTooHeigh::what() const throw()
{
    return ("Grade too heigh!");
}

const char* Form::GradeTooLow::what() const throw()
{
    return ("Grade too low!");
}

std::ostream&   operator<<(std::ostream& out, const Form& form)
{
    out << "Form " << form.getName() << " : signe grade " << form.getSigneNote() << ", exec grade " << form.getExecNote() << ", is signed " << form.getSigned() << std::endl;
    return (out);
}

// Form::GradeTooHeigh::GradeTooHeigh(const std::string& msg) : _msg("Grade " + msg + " too heigh!")
// {

// }

// const char* Form::GradeTooHeigh::what() const throw()
// {
//     return (_msg.c_str());
// }

// Form::GradeTooLow::GradeTooLow(const std::string& msg) : _msg("Grade " + msg + " too low!")
// {
    
// }

// const char* Form::GradeTooLow::what() const throw()
// {
//     return (_msg.c_str());
// }