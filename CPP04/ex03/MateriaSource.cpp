/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:21:56 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/04 21:28:44 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->invertory[i] = nullptr;
	//std::cout << "MateriaSource : Default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource & copy)
{
	for(int i = 0; i < 4; i++)
	{
		if (copy.invertory[i] != nullptr)
			this->invertory[i] = copy.invertory[i];
		else
			break ;
	}
	//std::cout << "MateriaSource : Copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->invertory[i] != nullptr)
			delete this->invertory[i];
	}
	//std::cout << "MateriaSource : Default destructor called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* lm)
{
	for (int i = 0; i < 4; i++)
	{
		if (lm && this->invertory[i] == nullptr)
		{
			if (intMaterialLearn(lm) == 0)
			{
				std::cout << "Learn materia : " << lm->getType() << std::endl;
				this->invertory[i] = lm;
			}
			else
				break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->invertory[i] != nullptr && this->invertory[i]->getType() == type)
		{
			std::cout << "Creat materia " << this->invertory[i]->getType() << std::endl;
			return (this->invertory[i]->clone());
		}
	}
	return (0);        
}

int		MateriaSource::intMaterialLearn(const AMateria* lm)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->invertory[i] != nullptr && this->invertory[i]->getType() == lm->getType())
			return (1);
	}
	return (0);
}