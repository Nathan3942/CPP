/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:33:21 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/21 17:25:05 by njeanbou         ###   ########.fr       */
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

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : " << name << " destructor called" << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << name << " request high five for every one!" << std::endl;
}