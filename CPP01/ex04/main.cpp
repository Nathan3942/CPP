/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 09:47:23 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/24 10:11:24 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main (int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wong arrgument count!" << std::endl;
		return (EXIT_FAILURE);
	}
	Sed sed(av[1]);
	sed.remplace(av[2], av[3]);
	return (0);
}