/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:41:19 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/22 16:14:33 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal : Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) : type(copy.type)
{
	std::cout << "WrongAnimal : Copy construcort called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal : Default destrucor called" << std::endl;
}

string	WrongAnimal::getType() const 
{
	return (this->type);
}

void	WrongAnimal::makeSound() const 
{
	std::cout << "Generic WrongAnimal sound" << std::endl;
}
