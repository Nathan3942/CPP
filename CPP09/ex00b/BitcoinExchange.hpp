/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:02:13 by njeanbou          #+#    #+#             */
/*   Updated: 2025/10/29 18:24:54 by njeanbou         ###   ########.fr       */
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


class Bitcoin
{
    private:
        std::map<std::string, float> exchangeRate;

    public:
        Bitcoin();
        Bitcoin(const std::string &dataBase);
        ~Bitcoin();

        void	setup_map(const std::string &dataBase);
        void	prossess_file(const std::string &input);
        void	get_value_rate(float value, const std::string &date);
		bool	is_good_value_format(const std::string &value_str);
		bool	is_valide_date(const std::string &date);
};



#endif