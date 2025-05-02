/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 00:10:09 by njeanbou          #+#    #+#             */
/*   Updated: 2025/05/01 00:40:40 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{

}

RPN::RPN(const RPN& copy)
{
	_stack = copy._stack;
}

RPN::~RPN()
{

}

RPN&	RPN::operator=(const RPN& equal)
{
	if (this != &equal)
	{
		_stack = equal._stack;
	}
	return (*this);
}

bool	RPN::isOperator(char c) const
{
	return (c == '+' || c == '-' || c == '/' || c == '*');
}

int RPN::appliOperator(int a, int b, char op) const
{
	switch (op)
	{
		case '+':
			return (a + b);
		case '-':
			return (a - b);
		case '/':
			if (b == 0)
				throw std::runtime_error("Division by zero!");
			return (a / b);
		case '*':
			return (a * b);
		default:
			throw std::runtime_error("Unknow operator!");
	}
}

int	RPN::evaluate(const std::string& expression)
{
	std::istringstream iss(expression);
	std::string	token;

	while (iss >> token)
	{
		if (token.length() == 1 && isOperator(token[0]))
		{
			if (_stack.size() < 2)
				throw std::runtime_error("Not enough operands!");
			int	b = _stack.top();
			_stack.pop();
			int	a = _stack.top();
			_stack.pop();
			_stack.push(appliOperator(a, b, token[0]));
		}
		else if (token.length() == 1 && isdigit(token[0]))
		{
			_stack.push(token[0] - '0');
		}
		else
			throw std::runtime_error("Invalide token: " + token);
	}
	if (_stack.size() != 1)
		throw std::runtime_error("Invalide expression!");
	return (_stack.top());
}