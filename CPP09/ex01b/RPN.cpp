/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 14:25:39 by njeanbou          #+#    #+#             */
/*   Updated: 2025/05/02 15:17:40 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{

}

RPN::RPN(const RPN& copy)
{
    *this = copy;
}

RPN::~RPN()
{

}

RPN&    RPN::operator=(const RPN& equal)
{
    if (this != &equal)
    {
        *this = equal;
    }
    return (*this);
}

bool	RPN::isOperator(const char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

int	RPN::makeOperation(int a, int b, const char op)
{
	switch (op)
	{
		case '+':
			return (a + b);
		case '-':
			return (a - b);
		case '*':
			return (a * b);
		case '/':
			if (b == 0)
				throw std::runtime_error("Division by zero!");
			return (a / b);
		default:
			throw std::runtime_error("Unknow operator!");
	}
}

int RPN::evaluate(const std::string& arg)
{
    std::istringstream iss(arg);
    std::string token;

    while (iss >> token)
    {
        if (token.length() == 1 && isOperator(token[0]))
		{
			if (_stack.size() < 2)
				throw std::runtime_error("Not enough operands!");
			int b = _stack.top();
			_stack.pop();
			int a = _stack.top();
			_stack.pop();
			_stack.push(makeOperation(a, b, token[0]));
		}
		else if (token.length() == 1 && isdigit(token[0]))
		{
			_stack.push(token[0] - '0');
		}
		else 
			std::runtime_error("Invalide token " + token);
    }
	if (_stack.size() != 1)
		throw std::runtime_error("Invalide expression!");
	return (_stack.top());
}