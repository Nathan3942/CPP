/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 10:24:54 by njeanbou          #+#    #+#             */
/*   Updated: 2025/02/03 15:23:17 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <cfloat>
#include <iomanip>
#include <cmath>
#include <sstream>

#define MIN_INT std::numeric_limits<int>::min()
#define MAX_INT std::numeric_limits<int>::max()
#define MIN_FLOAT std::numeric_limits<float>::min()
#define MAX_FLOAT std::numeric_limits<float>::max()
#define MIN_DOUBLE std::numeric_limits<double>::min()
#define MAX_DOUBLE std::numeric_limits<double>::max()

enum	e_type
{
	SPECIAL = 0,
	CHAR = 1,
	INT = 2,
	FLOAT = 3,
	DOUBLE = 4,
	INVALID = -1
};

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& copy);
        ScalarConverter& operator=(const ScalarConverter& equal);
        ~ScalarConverter();
    
    public:
        static void convert(const std::string& literal);
};

e_type	witchType(const std::string& str, size_t& len);
void	printSpecial(const std::string& str);
void	convertChar(const std::string& str, size_t& len);
void	convertInt(const std::string& str);
void	convertFloat(const std::string& str);
void	convertDouble(const std::string& str);

#endif