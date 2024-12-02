/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:33:59 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/29 17:44:26 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default")
{
    this->guard_mode = false;
    this->PV = 100;
    this->PE = 50;
    if (this->AD != 30)
        this->AD = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->guard_mode = false;
    this->PV = 100;
    this->PE = 50;
    if (this->AD != 30)
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

int	ScavTrap::getPV() const
{
	return (this->PV);
}

int	ScavTrap::getPE() const
{
	return (this->PE);
}

int	ScavTrap::getAD() const
{
	return (this->AD);
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