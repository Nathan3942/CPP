/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 04:49:36 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/24 05:33:57 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

#include <iostream>
#include <fstream>
#include <string>

int	main(int ac, char **av)
{

	if (ac != 4)
		return (1);
	Sed sed(av[1]);
	sed.remplace(av[2], av[3]);
	return (0);
}