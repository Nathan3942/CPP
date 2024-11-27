/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 03:15:13 by vboxuser          #+#    #+#             */
/*   Updated: 2024/11/26 11:41:34 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("Default")
{
    std::cout << "Default constructor" << std::endl;
}

Zombie::Zombie(const std::string& name) : name(name)
{
    std::cout << this->name << " constructor" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Destructor " << name << std::endl;
}

void    Zombie::annonce(void)
{
    std::cout << name << " : BraiiiiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string& name)
{
    this->name = name;
}