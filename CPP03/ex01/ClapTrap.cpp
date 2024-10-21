/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:25:03 by njeanbou          #+#    #+#             */
/*   Updated: 2024/08/20 17:26:40 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
	std::cout << "ClapTrap default construcor called for " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap default destructor called for " << name << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (PV <= 0)
	{
		std::cout << "ClapTrap : " << name << " is dead" << std::endl;
		return ;
	}
	if (PE > 0)
	{
		std::cout << "ClapTrap : " << name << " attack " << target << " and hit him for " << AD << " dommage" << std::endl;
		this->PE -= 1;
	}
	else
		std::cout << "ClapTrap : " << name << " dont have enery" << std::endl;
	std::cout << "ClapTrap : " << name << " has again " << PE << " PE" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (PV <= 0)
	{
		std::cout << name << " is already dead" << std::endl;
		return ;
	}
	this->PV -= amount;
	std::cout << name << " take " << amount << " dommage" << std::endl;
	if (PV <= 0)
		std::cout << name << " is dead" << std::endl;
	else
		std::cout << name << " has " << PV << " PV" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (PV <= 0)
	{
		std::cout << name << " is already dead" << std::endl;
		return ;
	}
	if (PE > 0)
	{
		this->PV += amount;
		this->PE -= 1;
		std::cout << name << " repairs itself and have now " << PV << " PV" << std::endl;
	}
	else
		std::cout << name << " dont have enery";
}