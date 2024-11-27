/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:19:33 by vboxuser          #+#    #+#             */
/*   Updated: 2024/11/26 13:04:27 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{
	std::cout << "Destructor" << std::endl;
}

void	Harl::debug()
{
	std::cout << "Debug" << std::endl;
}

void	Harl::info()
{
	std::cout << "Info" << std::endl;
}

void	Harl::warning()
{
	std::cout << "Warning" << std::endl;
}

void	Harl::error()
{
	std::cout << "Error" << std::endl;
}

void	Harl::complain(std::string level)
{
	if (level.compare("Exit") == 0)
		return ;
	std::string lvl[] = {"Debug", "Info", "Warning", "Error"};
	int i = 0;
	while(i < 4 && lvl[i].compare(level))
		i++;
	if (i == 4)
		std::cout << "Hummm...." << std::endl;	
	while (i < 4)
	{
		switch (i)
		{
			case 0:
				this->debug();
				break;
			case 1:
				this->info();
				break;
			case 2:
				this->warning();
				break;
			case 3:
				this->error();
				break;
		}
		i++;
	}
}