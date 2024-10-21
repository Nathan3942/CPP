/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:33:59 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/21 17:25:56 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
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

void	ScavTrap::attack(const std::string& target)
{
	if (PV <= 0)
	{
		std::cout << "ScavTrap : " << name << " is dead" << std::endl;
		return ;
	}
	if (PE > 0)
	{
		std::cout << "ScavTrap : " << name << " attack " << target << " and hit him for " << AD << " dommage" << std::endl;
		this->PE -= 1;
	}
	else
		std::cout << "ScavTrap : " << name << " dont have enery" << std::endl;
	std::cout << "ScavTrap : " << name << " has again " << PE << " PE" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap : " << name << " is now in Gate keeper mode" << std::endl;
}