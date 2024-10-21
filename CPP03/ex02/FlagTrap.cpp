/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:33:21 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/21 17:21:52 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap() : ClapTrap()
{
	this->PV = 100;
	this->PE = 100;
	this->AD = 30;
	std::cout << "FlagTrap : default constructor called" << std::endl;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
	this->PV = 100;
	this->PE = 100;
	this->AD = 30;
	std::cout << "FlagTrap : " << name << " constructor called" << std::endl;
}

FlagTrap::~FlagTrap()
{
	std::cout << "FlagTrap : " << name << " destructor called" << std::endl;
}

void	FlagTrap::highFiveGuys(void)
{
	std::cout << "FlagTrap " << name << " request high five for every one!" << std::endl;
}