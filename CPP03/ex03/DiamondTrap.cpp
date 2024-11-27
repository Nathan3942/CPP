/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:21:39 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/27 20:56:08 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
    this->_name = "Default";
    ClapTrap::name = this->name + "_clap_name";
    this->PV = FragTrap::PV;
    this->PE = ScavTrap::PE;
    this->AD = FragTrap::AD;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
    this->PV = FragTrap::PV;
    this->PE = ScavTrap::PE;
    this->AD = FragTrap::AD;
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

void    DiamondTrap::annonce() const 
{
    std::cout << "Annonce : " << std::endl;
    std::cout << "Name " << this->_name << std::endl;
    std::cout << "Name ClapTrap " << this->name << std::endl;
    std::cout << "PV " << this->PV << std::endl;
    std::cout << "PE " << this->PE << std::endl;
    std::cout << "AD " << this->AD << std::endl;
}