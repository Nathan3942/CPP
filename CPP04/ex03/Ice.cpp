/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:03:26 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/04 21:28:31 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
    //std::cout << "Ice : Default constructor called" << std::endl;
}

Ice::Ice(const Ice& copy)
{
    this->type = copy.type;
    //std::cout << "Ice : Copy constructor called" << std::endl;
}

Ice::~Ice()
{
    //std::cout << "Ice : Default destructor called" << std::endl;
}

Ice&    Ice::operator=(const Ice& equal)
{
    if (this != &equal)
    {
        this->type = equal.type;
    }
    std::cout << "Ice : Assignment operator called" << std::endl;
    return (*this);
}

AMateria*    Ice::clone() const
{
    return (new Ice(*this));
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}