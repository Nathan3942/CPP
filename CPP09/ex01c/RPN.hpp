/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:42:55 by njeanbou          #+#    #+#             */
/*   Updated: 2025/11/04 17:03:12 by njeanbou         ###   ########.fr       */
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
        std::stack<int> stack;

        bool is_operator(const char c);
        int	make_operation(int a, int b, const char op);
    
    public:
        RPN();
        ~RPN();

        int evaluate(const std::string &input);
};



#endif