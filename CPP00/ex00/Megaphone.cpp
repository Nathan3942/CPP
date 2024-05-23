/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:11:32 by njeanbou          #+#    #+#             */
/*   Updated: 2024/05/23 13:02:10 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{   
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for(int i = 1; av[i]; i++)
		{
			for(int z = 0; av[i][z]; z++)
				std::cout << (char)std::toupper(av[i][z]);
		}
		std::cout << std::endl;
	}
	return (0);
}