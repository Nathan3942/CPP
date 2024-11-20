/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:42:58 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/20 18:12:46 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default")
{

}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm("RobotomyRequestForm", 72, 45), _target(copy._target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm : destructor called" << std::endl;
}

RobotomyRequestForm&    RobotomyRequestForm::operator=(const RobotomyRequestForm& equal)
{
    if (this != &equal)
    {
        this->_target = equal._target;
    }
    return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
    return (this->_target);
}

void    RobotomyRequestForm::robotization(const Bureaucrat& bur)
{
    if (bur.getGrade() > this->getSignGrade())
        throw(GradeTooLowException());
    else if (this->getSigned() == false)
        throw(NotSignedException());
    else
    {
        std::srand(std::time(nullptr));
        double randomValue = static_cast<double>(std::rand()) / RAND_MAX;
        std::cout << "VVVVVVVvvvvvVVvvvvv(bruit de persage ;)" << std::endl;
        if (randomValue > 0.5)
            std::cout << "Success! " << this->_target << " is robotic" << std::endl;
        else
            std::cout << "Fail! " << this->_target << " is not robotic :(" << std::endl;
    }
}

int	RobotomyRequestForm::execute(const Bureaucrat& bur) const
{
	if (this->getSigned() == false)
		return (1);
	if (bur.getGrade() > this->getExGrade())
		return (2);
	return (0);
}

std::ostream&   operator<<(std::ostream& out, RobotomyRequestForm& form)
{
    out << form.getTarget() << " target : " << form.getTarget();
    return (out);
}