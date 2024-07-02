/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 14:56:53 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/21 15:47:23 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& initialType) : type(initialType) {}

Weapon::~Weapon()
{
    std::cout << "Destructor : " << type << std::endl;
}

const std::string&	Weapon::getType() const
{
    return (type);
}

void	Weapon::setType(const std::string& newType)
{
	this->type = newType;
}