/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:25:03 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/28 18:05:58 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), PV(10), PE(10), AD(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), PV(10), PE(10), AD(0)
{
	std::cout << "ClapTrap default construcor called for " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
	std::cout << "ClapTrap copy construcor called for " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap default destructor called for " << name << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& equal)
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

int		ClapTrap::getAD() const
{
	return (this->AD);
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
		std::cout << name << " dont have enery" << std::endl;
	std::cout << "ClapTrap : " << name << " has again " << PE << " PE" << std::endl;
}