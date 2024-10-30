/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:43:17 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/30 18:46:12 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name): _name(name)
{
    for(int i = 0; i < 4; i++)
        this->_inventory[i] = nullptr;
    std::cout << "Character : Default constructor called" << std::endl;
}

Character::Character(const Character& copy) : _name(copy._name)
{
    for (int i = 0; i < 4; i++)
		this->_inventory[i] = copy._inventory[i];
    std::cout << "Character : Copy constructor called" << std::endl;    
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != nullptr)
			delete this->_inventory[i];
	}
    std::cout << "Character : Default constructor called" << std::endl;
}

Character& Character::operator=(const Character& equal)
{
    if (this != &equal)
    {
        this->_name = equal._name;
        for (int i = 0; i < 4; i++)
            this->_inventory[i] = equal._inventory[i];
    }
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	int equip = 0;
	for (int i = 0; i < 4; i++)
	{
		if (m && this->_inventory[i] == nullptr)
		{
			this->_inventory[i] = m;
			std::cout << "Equip " << m->getType() << " in index " << i << std::endl;
			equip = 1;
			break ;
		}
	}
	if (equip == 0)
		std::cout << "Inventory full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (this->_inventory[idx] == nullptr)
		std::cout << "This index is empty" << std::endl;
	this->_inventory[idx] = nullptr;
}

void	Character::use(int idx, ICharacter& target)
{
	if (this->_inventory[idx] == nullptr)
		std::cout << "This index is empty" << std::endl;
	else
		this->_inventory[idx]->use(target);
}