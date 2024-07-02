/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 03:15:13 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/20 03:56:57 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


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