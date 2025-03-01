/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:35:09 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/22 16:17:04 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

using namespace std;

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

Brain&	Brain::operator=(const Brain& equal)
{
	if(this != &equal)
	{
		for(int i = 0; i < 100; i++)
			ideas[i] = equal.ideas[i];
	}
	return (*this);
}
