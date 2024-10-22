/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:57:42 by njeanbou          #+#    #+#             */
/*   Updated: 2024/09/03 12:27:50 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain : Default constructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
    *this = copy;
    std::cout << "Brain : Copy constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain : Default destructor called" << std::endl;
}

Brain&  Brain::operator=(const Brain& equal)
{
    if (this != &equal)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = equal.ideas[i];
    }
    std::cout << "Brain : Assignment operator called" << std::endl;
    return (*this);
}