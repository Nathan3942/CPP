/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:23:20 by njeanbou          #+#    #+#             */
/*   Updated: 2025/02/18 18:57:22 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Wrong argument!" << std::endl;
		return (1);
	}

	try
	{
		BitcoinExchange btc("data.csv");
		btc.prossessInputFile(av[1]);
		// btc.showRateValue();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}

	return (0);
}