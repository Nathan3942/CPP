/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:21:39 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/29 17:48:58 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("defaultDT_clap_trap")
{
	this->_name = "defaultDT";
	this->PV = FragTrap::getPV();
	this->PE = ScavTrap::getPE();
	this->AD = FragTrap::getAD();
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
	*this = copy;
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap")
{
	this->_name = name;
	this->PV = FragTrap::getPV();
	this->PE = ScavTrap::getPE();
	this->AD = FragTrap::getAD();
	std::cout << "DiamondTrap Constructor for the name " << this->_name << " called" << std::endl;
}

// Deconstructors
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Deconstructor for " << this->_name << " called" << std::endl;
}

// Overloaded Operators
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	this->_name = src._name + "_clap_trap";
	this->PV = src.PV;
	this->PE = src.PE;
	this->AD = src.AD;
	return *this;
}

// DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name")
// {
//     this->_name = "Default";
//     this->PV = ScavTrap::PV;
//     this->PE = FragTrap::PE;
//     this->AD = ScavTrap::AD;
//     std::cout << "DiamondTrap default constructor called" << std::endl;
// }

// DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name")
// {
//     this->_name = name;
//     this->PV = ScavTrap::PV;
//     this->PE = FragTrap::PE;
//     this->AD = ScavTrap::AD;
//     std::cout << "DiamondTrap : " << _name << " constructor called" << std::endl;
// }

// DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
// {
//     *this = copy;
//     // this->PV = FragTrap::PV;
//     // this->PE = ScavTrap::PE;
//     // this->AD = FragTrap::AD;
//     std::cout << "DiamondTrap : " << _name << " copy constructor called" << std::endl;
// }

// DiamondTrap::~DiamondTrap()
// {
//     std::cout << "DiamondTrap : " << _name << " destructor called" << std::endl;
// }

// DiamondTrap&    DiamondTrap::operator=(const DiamondTrap& equal)
// {
//     if (this != &equal)
//     {
//         this->_name = equal._name;
//         this->name = equal.name;
//         this->PV = equal.PV;
//         this->PE = equal.PE;
//         this->AD = equal.AD;
//     }
//     return (*this);
// }

void    DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << this->_name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}

// void	DiamondTrap::whoAmI(void)
// {
// 	std::cout << "Hello i am a DiamondTrap named " << this->_name <<
// 	" and i am originated from the ClapTrap named " << ClapTrap::name << "." <<
// 	std::endl;
// 	std::cout << this->PV << " " << this->PE << " " << this->AD << std::endl;
// }

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