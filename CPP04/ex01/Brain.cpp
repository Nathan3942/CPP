/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:35:09 by njeanbou          #+#    #+#             */
/*   Updated: 2024/08/21 20:39:42 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

using namespace std;

Brain::Brain()
{
	cout << "Brain : Default constructor called" << endl;
}

Brain::Brain(const Brain& copy)
{
	*this = copy;
	cout << "Brain : Copy constructor called" << endl;
}

Brain::~Brain()
{
	cout << "Brain : Default destructor called" << endl;
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
