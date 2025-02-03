/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 10:46:54 by njeanbou          #+#    #+#             */
/*   Updated: 2025/02/03 15:23:34 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
	*this = copy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& equal)
{
	if (this != &equal)
		*this = equal;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	
}

void	ScalarConverter::convert(const std::string& literal)
{
	size_t	len = literal.length();
	e_type type = witchType(literal, len);

	switch(type)
	{
		case INVALID:
			std::cout << "Invalid input!" << std::endl;
			break;
		case SPECIAL:
			printSpecial(literal);
			break;
		case CHAR:
			convertChar(literal, len);
			break;
		case INT:
			convertInt(literal);
			break;
		case FLOAT:
			convertFloat(literal);
			break;
		case DOUBLE:
			convertDouble(literal);
			break;
	}
}