/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:33:59 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/27 20:42:19 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default")
{
    this->PV = 100;
    this->PE = 50;
    this->AD = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->PV = 100;
    this->PE = 50;
    this->AD = 20;
    std::cout << "ScavTrap constructor called for " << name << std::endl;
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
    std::cout << "ScavTrap : " << name << " is now in Gate keeper mode" << std::endl;
}