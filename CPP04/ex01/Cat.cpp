/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:24:27 by njeanbou          #+#    #+#             */
/*   Updated: 2024/08/21 20:48:01 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
	this->type = "Cat";
	cout << "Cat : Default construcor called" << endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	brain = new Brain(*copy.brain);
	cout << "Cat : copy constructor called" << endl;
}

Cat& Cat::operator=(const Cat& equal)
{
	if (this != &equal)
	{
		Animal::operator=(equal);
		delete brain;
		brain = new Brain(*equal.brain);
	}
	cout << "Cat : assignment operator called" << endl;
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	cout << "Cat : Default destrucor called" << endl;
}

void	Cat::makeSound() const 
{
	cout << "Miaou Miaou" << endl;
}