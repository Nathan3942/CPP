/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:18:53 by vboxuser          #+#    #+#             */
/*   Updated: 2024/11/26 15:29:06 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char **av)
{
	if (ac == 1 || ac > 2)
		return (1);
	Harl harl;
	std::string txt;

	txt = av[1];

	harl.complain(txt);
	// do
	// {
	// 	std::cout << "Enter level : ";
	// 	std::cin >> txt;
	// 	harl.complain(txt);
	// } while (txt.compare("Exit"));
	return (0);
}