/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:38:31 by njeanbou          #+#    #+#             */
/*   Updated: 2025/02/18 19:21:01 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(const std::string& database)
{
	loadDatabase(database);
}


BitcoinExchange::~BitcoinExchange()
{

}



void	BitcoinExchange::loadDatabase(const std::string& database)
{
	std::ifstream file(database.c_str());
	if (!file.is_open())
		throw std::runtime_error("Can't open file!");
	std::string line;
	while (std::getline(file, line))
	{
		std::string	data;
		float	rate;
		std::istringstream iss(line);
		if (std::getline(iss, data, ',') && iss >> rate)
			exchangeRate[data] = rate;
	}
}

float	BitcoinExchange::getExchangeRate(const std::string& date)
{
	std::map<std::string, float>::const_iterator it = exchangeRate.lower_bound(date);
	if (it != exchangeRate.begin() && (it == exchangeRate.end() || it->first != date))
		--it;
	if (it == exchangeRate.end())
		throw std::runtime_error("Error: no valid date found in database!");
	return (it->second);
}

void	BitcoinExchange::prossessInputFile(const std::string& inputFile)
{
	std::ifstream file(inputFile.c_str());
	if (!file.is_open())
		throw std::runtime_error("Error: can't open file!");
	std::string line;
	while (getline(file, line))
	{
		std::istringstream iss(line);
		std::string date, valueStr;
		if (std::getline(iss, date, '|') && std::getline(iss, valueStr))
		{
			date.erase(0, date.find_first_not_of(' '));
			date.erase(date.find_last_not_of(' ') + 1);
			valueStr.erase(0, valueStr.find_first_not_of(' '));
			valueStr.erase(valueStr.find_last_not_of(' ') + 1);

			if (isValideDate(date) && isValideValue(valueStr))
			{
				try
				{
					char*	endPtr;
					float	value = std::strtod(valueStr.c_str(), &endPtr);
					if (*endPtr != '\0')
						throw std::runtime_error("Invalide value format!");
					float	rate = getExchangeRate(date);
					std::cout << date << " => " << valueStr << " = " << std::fixed << std::setprecision(2) << value * rate << std::endl;
				}
				catch(const std::exception& e)
				{
					std::cerr << "Error: " << e.what() << std::endl;
				}
			}
		}
		else
			std::cerr << "Error: bad input => " << date << std::endl;
	}
}

bool	BitcoinExchange::isValideDate(const std::string& date)
{
	if (date.size() == 10 && date[4] == '-' && date[7] == '-')
		return (1);
	else
		std::cerr << "Bad date format!" << std::endl;
	return (0);
}

bool	BitcoinExchange::isValideValue(const std::string& valueStr)
{
	char*	endPtr;
	double	value = std::strtod(valueStr.c_str(), &endPtr);
	if (*endPtr != '\0')
	{
		std::cerr << "Error: not a float value." << std::endl;
		return (false);
	}
	if (value < 0)
	{
		std::cerr << "Error: not a positif number." << std::endl;
		return (0);
	}
	if (value > 1000)
	{
		std::cerr << "Error: too large number." << std::endl;
		return (0);
	}
	return (1);
}

// Valider la valeur
// bool BitcoinExchange::isValideValue(const std::string& valueStr) {
//     char* endPtr;
//     double value = std::strtod(valueStr.c_str(), &endPtr); // Conversion en C++98
//     if (*endPtr != '\0') {
//         return false; // La chaîne n'est pas un nombre valide
//     }
//     return value >= 0 && value <= 1000;
// }

void	BitcoinExchange::showRateValue()
{
	std::cout << "Contenu de exchangeRates :" << std::endl;
    for (std::map<std::string, float>::const_iterator it = exchangeRate.begin(); it != exchangeRate.end(); ++it) {
        std::cout << "Date: " << it->first << ", Taux: " << it->second << std::endl;
    }
}