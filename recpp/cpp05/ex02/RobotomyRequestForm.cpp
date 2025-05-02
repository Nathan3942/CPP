/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:07:55 by njeanbou          #+#    #+#             */
/*   Updated: 2025/04/10 13:33:01 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy._target, copy.getSigneNote(), copy.getExecNote()), _target(copy._target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm&    RobotomyRequestForm::operator=(const RobotomyRequestForm& equal)
{
    if (this != &equal)
    {
        this->_target = equal._target;
    }
    return (*this);
}

void    RobotomyRequestForm::execForm() const
{
    srand(time(NULL));
    int random = rand() % 2;

    std::cout << "Brrrrrrrrrbrrrrrrr brrrrrrrrrrrr" << std::endl;
    if (random == 1)
        std::cout << _target << " robotization success!" << std::endl;
    else
        std::cout << _target << " faild to robotization :(" << std::endl;
}