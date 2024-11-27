/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 02:21:25 by vboxuser          #+#    #+#             */
/*   Updated: 2024/11/26 11:33:47 by njeanbou         ###   ########.fr       */
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
	std::cout << name << " : BraiiiiiinnnzzZ" << std::endl;
}

