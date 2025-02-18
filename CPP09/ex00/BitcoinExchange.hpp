/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:21:15 by njeanbou          #+#    #+#             */
/*   Updated: 2025/02/18 18:58:38 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <iomanip>
#include <cstdlib>


class BitcoinExchange
{
	private:
		std::map<std::string, float> exchangeRate;

	public:
		BitcoinExchange(const std::string& database);
		BitcoinExchange(BitcoinExchange& copy);
		~BitcoinExchange();


		void	loadDatabase(const std::string& database);
		float	getExchangeRate(const std::string& date);
		void	prossessInputFile(const std::string& inputFile);

		bool	isValideDate(const std::string& date);
		bool	isValideValue(const std::string& valueStr);

		//test
		void	showRateValue();
};


#endif