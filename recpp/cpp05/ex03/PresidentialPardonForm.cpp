/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:08:20 by njeanbou          #+#    #+#             */
/*   Updated: 2025/04/10 13:21:32 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy.getName(), copy.getSigneNote(), copy.getExecNote()), _target(copy._target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& equal)
{
    if (this != &equal)
        this->_target = equal._target;
    return (*this);
}

void    PresidentialPardonForm::execForm() const
{
    std::cout << this->_target << " has been gracied by Zaphod Beeblebrox" << std::endl;
}