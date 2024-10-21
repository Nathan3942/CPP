/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:41:19 by njeanbou          #+#    #+#             */
/*   Updated: 2024/08/21 19:59:28 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	cout << "WrongAnimal : Default constructor called" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) : type(copy.type)
{
	cout << "WrongAnimal : Copy construcort called" << endl;
}

WrongAnimal::~WrongAnimal()
{
	cout << "WrongAnimal : Default destrucor called" << endl;
}

string	WrongAnimal::getType() const 
{
	return (this->type);
}

void	WrongAnimal::makeSound() const 
{
	cout << "Generic WrongAnimal sound" << endl;
}
