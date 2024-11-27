/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:33:21 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/27 16:39:02 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->PV = 100;
	this->PE = 100;
	this->AD = 30;
	std::cout << "FragTrap : default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->PV = 100;
	this->PE = 100;
	this->AD = 30;
	std::cout << "FragTrap : " << name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy.name)
{
	this->PV = copy.PV;
	this->PE = copy.PE;
	this->AD = copy.AD;
	std::cout << "FragTrap : " << name << " copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : " << name << " destructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& equal)
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

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << name << " request high five for every one!" << std::endl;
}