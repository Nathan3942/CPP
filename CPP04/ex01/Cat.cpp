/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:24:27 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/22 16:17:24 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
	this->type = "Cat";
	std::cout << "Cat : Default construcor called" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	brain = new Brain(*copy.brain);
	std::cout << "Cat : copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& equal)
{
	if (this != &equal)
	{
		Animal::operator=(equal);
		delete brain;
		brain = new Brain(*equal.brain);
	}
	std::cout << "Cat : assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat : Default destrucor called" << std::endl;
}

void	Cat::makeSound() const 
{
	std::cout << "Miaou Miaou" << std::endl;
}