/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:21:39 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/21 17:24:48 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), _name()
{
    this->FragTrap::PV = 100;
    this->ScavTrap::PE = 50;
    this->FragTrap::AD = 30;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
    this->FragTrap::PV = 100;
    this->ScavTrap::PE = 50;
    this->FragTrap::AD = 30;
   std::cout << "DiamondTrap : " << _name << " constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap : " << _name << " destructor called" << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << this->_name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}

void    DiamondTrap::attack(const std::string target)
{
    ScavTrap::attack(target);
}