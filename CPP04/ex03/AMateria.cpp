/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:54:57 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/04 21:27:55 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type()
{
	//std::cout << "AMateria : Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	//std::cout << "AMateria : constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& copy) : type(copy.type)
{
	//std::cout << "AMateria : Copy constructor called" << std::endl;
}

AMateria::~AMateria()
{
	//std::cout << "AMateria : Default destructor called" << std::endl;
}

AMateria&   AMateria::operator=(const AMateria& equal)
{
	if (this != &equal)
	{
		this->type = equal.type;
	}
	std::cout << "AMateria : Assignment operator called" << std::endl;
	return (*this);
}

std::string const &	AMateria::getType() const
{
	return (this->type);
}