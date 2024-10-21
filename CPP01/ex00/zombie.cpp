/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 02:21:25 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/20 03:12:12 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"


// : name pour rendre name utilisable dans tout les fonction zombie
Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "constructor : " << name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "destructor : " << name << std::endl;
}

void	Zombie::annonce(void)
{
	std::cout << name << "BraiiiiiinnnzzZ" << std::endl;
}

