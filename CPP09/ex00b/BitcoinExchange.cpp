/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:03:07 by njeanbou          #+#    #+#             */
/*   Updated: 2025/10/29 19:57:13 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin()
{

}

Bitcoin::Bitcoin(const std::string &dataBase)
{
    setup_map(dataBase);
}

Bitcoin::~Bitcoin()
{

}


void    Bitcoin::setup_map(const std::string &dataBase)
{
    std::ifstream file(dataBase.c_str());
    if (!file.is_open())
        throw std::runtime_error("Can't open file");
    std::string line;
    while (std::getline(file, line))
	{
		std::string data;
		float rate;
		std::istringstream iss(line);
		if (std::getline(iss, data, ','), iss >> rate)
			exchangeRate[data] = rate;
	}
}


void	Bitcoin::prossess_file(const std::string& input)
{
	std::ifstream file(input.c_str());
	if (!file.is_open())
		throw std::runtime_error("Can't open file");
	std::string line;
	bool isFirstLine = false;
	while (std::getline(file, line))
	{
		if (isFirstLine == true)
		{
			std::string date;
			std::string value_str;
			std::istringstream iss(line);
			if (std::getline(iss, date, '|') && std::getline(iss, value_str))
			{
				// std::cout << "Date " << date << " Value " << value << std::endl;
				if (!date.empty() && date[date.size() - 1] == ' ')
					date.erase(date.size() - 1);
				if (!value_str.empty() && value_str[0] == ' ')
					value_str.erase(0, 1);
				if (is_good_value_format(value_str) && is_valide_date(date))
				{
					
					std::istringstream conv(value_str);
					float value;
					conv >> value;
					if (!conv.fail())
						get_value_rate(value, date);
					else
						std::cerr << "Error: invalid number format => " << value_str << std::endl;
				}
			}
			else if (!line.empty())
				std::cerr << "Error: bad input => " << line << std::endl;
		}
		else
		{
			std::cout << line << std::endl;
			isFirstLine = true;
		}
	}
}


void	Bitcoin::get_value_rate(float value, const std::string &date)
{
	float ret_val;
	std::map<std::string, float>::iterator it = exchangeRate.lower_bound(date);
	if (it != exchangeRate.begin() && (it == exchangeRate.end() || it->first != date))
		--it;
	if (it != exchangeRate.end())
	{
		ret_val = value * it->second;
		std::cout << it->first << " => " << value << " = " << ret_val << std::endl;
	}
	else
		throw std::runtime_error("No found date!");
}

bool	Bitcoin::is_good_value_format(const std::string &value_str)
{
	bool has_dot = false;
	if (value_str.empty())
		return (std::cerr << "Error: empty value." << std::endl, false);

	for (size_t i = 0; i < value_str.size(); ++i)
	{
		if (value_str[i] == '.')
		{
			if (has_dot == true)
				return (std::cerr << "Error: invalid number format." << std::endl, false);
			has_dot = true;
		}
		else if (!isdigit(value_str[i]))
			return (std::cerr << "Error: invalid character in number." << std::endl, false);
	}

	if (value_str[0] == '.' || value_str[value_str.size() - 1] == '.')
		return (std::cerr << "Error: invalid number format." << std::endl, false);


	std::istringstream iss(value_str);
	float value;
	if (!(iss >> value))
	{
		std::cerr << "Error: invalid float conversion." << std::endl;
	}


	if (value < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return (false);
	}
	if (value > 1000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return (false);
	}
	return (true);
}


bool Bitcoin::is_valide_date(const std::string& date)
{
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
	{
		std::cerr << "Bad date format." << std::endl;
		return (false);
	}

	for (size_t i = 0; i < date.size(); ++i)
	{
		if (i == 4 || i == 7)
			continue;
		if (!isdigit(date[i]))
		{
			std::cerr << "Bad date format." << std::endl;
			return (false);
		}
	}

	std::string month_str = date.substr(5, 2);
	std::string day_str = date.substr(8, 2);

	int month = atoi(month_str.c_str());
	int day = atoi(day_str.c_str());

	if (month < 1 || month > 12 || day < 1 || day > 31)
	{
		std::cerr << "Bad date format." << std::endl;
		return (false);
	}
    return true;
}