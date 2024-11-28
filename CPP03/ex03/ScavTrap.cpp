/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:33:59 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/28 19:12:30 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default")
{
    this->guard_mode = false;
    this->PV = 100;
    this->PE = 50;
    this->AD = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->guard_mode = false;
    this->PV = 100;
    this->PE = 50;
    this->AD = 20;
    std::cout << "ScavTrap constructor called for " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    this->guard_mode = copy.guard_mode;
    std::cout << "ScavTrap copy constructor called for " << name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap default destructor called for " << name << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& equal)
{
	if (this != &equal)
	{
		this->name = equal.name;
		this->PV = equal.PV;
		this->PE = equal.PE;
		this->AD = equal.AD;
	}
	return (*this);
}

void    ScavTrap::guardGate()
{
    if (this->guard_mode == false)
    {
		this->guard_mode = true;
        std::cout << "ScavTrap : " << name << " is now in Gate keeper mode" << std::endl;
    }
	else
		std::cout << "ScavTrap : " << name << " is early in Gate keeper mode" << std::endl;
}