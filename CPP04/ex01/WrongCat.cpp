/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:49:23 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/22 16:19:21 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat : Default construcor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat : copy construcor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat : Default destructor called" << std::endl;
}

std::string	WrongCat::getType() const 
{
	return (this->type);
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong Miaou Miaou" << std::endl;
}