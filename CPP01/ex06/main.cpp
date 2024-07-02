/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:18:53 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/24 12:54:33 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main ()
{
	Harl harl;
	std::string txt;

	do
	{
		std::cout << "Enter level : ";
		std::cin >> txt;
		harl.complain(txt);
	} while (txt.compare("Exit"));
	return (0);
}