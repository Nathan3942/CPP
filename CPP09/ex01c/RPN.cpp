/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:42:47 by njeanbou          #+#    #+#             */
/*   Updated: 2025/11/04 17:17:50 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{

}

RPN::~RPN()
{

}

int	RPN::make_operation(int a, int b, const char op)
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
				throw std::runtime_error("Division by 0");
			return (a / b);
		default:
			throw std::runtime_error("Unknow operator!");
	}
}

bool RPN::is_operator(const char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/');
}


int RPN::evaluate(const std::string &input)
{
	std::istringstream iss(input);
	std::string token;

	while (iss >> token)
	{
		if (token.size() == 1 && is_operator(token[0]))
		{
			if (stack.size() < 2)
				throw std::runtime_error("Not enough operands!");
			int b = stack.top();
			stack.pop();
			int a = stack.top();
			stack.pop();
			stack.push(make_operation(a, b, token[0]));
		}
		else if (token.size() == 1 && isdigit(token[0]))
		{
			stack.push(token[0] - '0');
		}
		else
			throw std::runtime_error("Invalide token " + token);
	}
	if (stack.size() != 1)
		throw std::runtime_error("Invalide expression!");
	return (stack.top());
}

