/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:57:15 by njeanbou          #+#    #+#             */
/*   Updated: 2025/05/22 18:30:33 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char** av, int ac)
{
	for (int i = 1; i < ac; ++i)
	{
		int n = atoi(av[i]);
		_vlst.push_back(n);
		// std::cout << _vlst[i - 1] << std::endl;
	}
}

PmergeMe::~PmergeMe()
{
	
}



std::vector<int>	PmergeMe::mergeSort(std::vector<int>& v)
{
	if (v.size() <= 1)
		return v;
	std::vector<int> lstBig;
	std::vector<int> lstNotBig;
	for (std::size_t i = 0; i < v.size(); i += 2)
	{
		if (i + 1 < v.size())
		{
			int a = v[i];
			int b = v[i + 1];
			if (a > b)
				std::swap(a, b);
			lstBig.push_back(b);
			lstNotBig.push_back(a);
		}
		else
			lstBig.push_back(v[i]);
	}

	lstBig = mergeSort(lstBig);

	for (std::size_t i = 0; i < lstNotBig.size(); ++i)
	{
		int value = lstNotBig[i];
		std::vector<int>::iterator it = lstBig.begin();
		std::vector<int>::iterator end = lstBig.end();
		while (it < end)
		{
			std::vector<int>::iterator mid = it + (end - it) / 2;
			if (*mid < value)
				it = mid + 1;
			else
				end = mid;
		}
		lstBig.insert(it, value);
	}
	return (lstBig);
}


void	PmergeMe::sort()
{
	_vlst = this->mergeSort(_vlst);
}

