/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:43:23 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/20 18:12:30 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default")
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm("PresidentialPardonForm", 25, 5), _target(copy._target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm : destructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& equal)
{
    if (this != &equal)
    {
        this->_target = equal._target;
    }
    return (*this);
}

std::string PresidentialPardonForm::getTarget() const
{
    return (this->_target);
}

void    PresidentialPardonForm::pardon(const Bureaucrat& bur)
{
    if (bur.getGrade() > this->getSignGrade())
        throw(GradeTooLowException());
    else if (this->getSigned() == false)
        throw(NotSignedException());
    else
    {
        std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
    }
}

int PresidentialPardonForm::execute(const Bureaucrat& bur) const
{
	if (this->getSigned() == false)
		return (1);
	if (bur.getGrade() > this->getExGrade())
		return (2);
	return (0);
}

std::ostream&   operator<<(std::ostream& out, PresidentialPardonForm& form)
{
    out << form.getTarget() << " target : " << form.getTarget();
    return (out);
}