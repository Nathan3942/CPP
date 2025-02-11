/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 05:41:06 by njeanbou          #+#    #+#             */
/*   Updated: 2025/02/11 06:26:43 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0)
{

}

Span::Span(unsigned int n) : N(n)
{
	
}

Span::Span(const Span& copy)
{
	*this = copy;
}

Span::~Span()
{

}

Span&	Span::operator=(const Span& equal)
{
	if (this != &equal)
	{
		N = equal.N;
		number = equal.number;
	}
	return (*this);
}

void	Span::addNumber(int n)
{
	if (number.size() >= N)
		throw FullContainerExeption();
	number.push_back(n);
}

int	Span::shortestSpan()
{
	if (number.size() <= 1)
		throw NotEnoughtExeption();
	std::vector<int> sortNumber = number;
	std::sort(sortNumber.begin(), sortNumber.end());

	int minSpan = INT_MAX;
	int span;
	for(size_t i = 1; i < sortNumber.size(); ++i)
	{
		span = sortNumber[i] - sortNumber[i - 1];
		if (span < minSpan)
			minSpan = span;
	}
	return (minSpan);
}

int	Span::longestSpan()
{
	if (number.size() <= 1)
		throw NotEnoughtExeption();
	int maxNumber = *std::max_element(number.begin(), number.end());
	int minNumber = *std::min_element(number.begin(), number.end());
	return (maxNumber - minNumber);
}

void	Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (number.size() + std::distance(begin, end) > N)
		throw FullContainerExeption();
	number.insert(number.end(), begin, end);
}

const char	*Span::FullContainerExeption::what() const throw()
{
	return ("Container full!");
}

const char	*Span::NotEnoughtExeption::what() const throw()
{
	return ("Not enought number in container!");
}

