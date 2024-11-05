/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:42:53 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/04 21:32:21 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
	//std::cout << "Cure : Default constructor called" << std::endl;
}

Cure::Cure(const Cure& copy)
{
	this->type = copy.type;
	//std::cout << "Cure : Copy constructor called" << std::endl;
}

Cure::~Cure()
{
	//std::cout << "Cure : Default destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& equal)
{
	if (this != &equal)
	{
		this->type = equal.type;
	}
	std::cout << "Crue : Assignment operator called" << std::endl;
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}