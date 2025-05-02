/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 00:09:56 by njeanbou          #+#    #+#             */
/*   Updated: 2025/05/01 00:24:44 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <cstdlib>

class RPN
{
	private:
		std::stack<int> _stack;

		bool	isOperator(char c) const;
		int		appliOperator(int a, int b, char op) const;

	public:
		RPN();
		RPN(const RPN& copy);
		~RPN();

		RPN&	operator=(const RPN& equal);

		int	evaluate(const std::string& expression);

};

#endif
