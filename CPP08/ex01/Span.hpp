/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 05:40:33 by njeanbou          #+#    #+#             */
/*   Updated: 2025/02/11 06:23:33 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <climits>
#include <exception>

class Span
{
    protected:
        unsigned int	N;
        std::vector<int>	number;

	public:
		Span();
		Span(unsigned int n);
		Span(const Span& copy);
		~Span();

		Span& operator=(const Span& equal);

		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();
		void	addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		class FullContainerExeption : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class NotEnoughtExeption : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

};

#endif