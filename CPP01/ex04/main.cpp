/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 09:47:23 by vboxuser          #+#    #+#             */
/*   Updated: 2024/11/26 15:17:49 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main (int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wong arrgument count!" << std::endl;
		return (1);
	}
	Sed sed(av[1]);
	sed.remplace(av[2], av[3]);
	return (0);
}