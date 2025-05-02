/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 14:25:26 by njeanbou          #+#    #+#             */
/*   Updated: 2025/05/02 14:47:07 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP


#include <string>
#include <iostream>
#include <stack>
#include <cstdlib>
#include <sstream>

class RPN
{
	private:
		std::stack<int> _stack;

		bool	isOperator(const char c);
		int		makeOperation(int a, int b, const char op);

	public:
		RPN();
		RPN(const RPN& copy);
		~RPN();

		RPN&	operator=(const RPN& equal);

		int	evaluate(const std::string& arg);
};


#endif