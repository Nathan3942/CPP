/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:19:33 by vboxuser          #+#    #+#             */
/*   Updated: 2024/11/26 15:26:42 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	
}

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
	t_func func[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string lvl[] = {"Debug", "Info", "Warning", "Error"};
	for (int i = 0; i < 4; i++)
	{
		if (lvl[i].compare(level) == 0)
		{
			(this->*func[i])();
			return ;
		}
	}
	std::cout << "Hummm...." << std::endl;
}