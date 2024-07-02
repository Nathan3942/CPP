/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:27:08 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/20 03:19:34 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : name(name)
{
}

Zombie::~Zombie()
{
    std::cout << name << " is destroyed" << std::endl;
}

void    Zombie::annonce(void)
{
    std::cout << name << ": BraiiiiiiiiiinnnzzzZ..." << std::endl;
}