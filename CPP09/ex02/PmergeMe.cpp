/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:16:14 by njeanbou          #+#    #+#             */
/*   Updated: 2025/05/12 17:29:49 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char** av, int ac)
{
	for (int i = 1; i < ac; ++i)
	{
		int n = std::atoi(av[i]);
		if (n <= 0)
		{
			std::cerr << "Invalide argument!" << std::endl;
			exit(1);
		}
		vlst.push_back(n);
		dlst.push_back(n);
	}
	lst_befor = vlst;
}

PmergeMe::PmergeMe(const PmergeMe& copy)
{
    this->vlst = copy.vlst;
    this->dlst = copy.dlst;
}

PmergeMe::~PmergeMe()
{

}


PmergeMe&	PmergeMe::operator=(const PmergeMe& equal)
{
	if (this != &equal)
	{
		this->vlst = equal.vlst;
		this->dlst = equal.dlst;
	}
	return (*this);
}


void	PmergeMe::sortVector(std::vector<int>& vec)
{
	if (vec.size() <= 1)
		return ;

	std::vector<int> mainChain;
	std::vector<int> pendings;

	for (std::size_t i = 0; i < vec.size(); i += 2)
	{
		if (i + 1 < vec.size())
		{
			int a = vec[i];
			int b = vec[i + 1];
			if (a > b)
				std::swap(a, b);
			pendings.push_back(a);
			mainChain.push_back(b);
		}
		else
			mainChain.push_back(vec[i]);
	}

	PmergeMe::sortVector(mainChain);

	for (std::size_t i = 0; i < pendings.size(); ++i)
	{
		int value = pendings[i];
		std::vector<int>::iterator it = mainChain.begin();
		std::vector<int>::iterator end = mainChain.end();
		while (it < end)
		{
			std::vector<int>::iterator mid = it + (end - it) / 2;
			if (*mid < value)
				it = mid + 1;
			else
				end = mid;
		}
		mainChain.insert(it, value);
	}
	vec = mainChain;
}

void	PmergeMe::sortVect()
{
	long start = getTimeMicroseconds();
	sortVector(vlst);
	timeVec = getTimeMicroseconds() - start;
}


void	PmergeMe::sortDeque(std::deque<int>& deq)
{
	if (deq.size() <= 1)
		return ;

	std::deque<int> mainChain;
	std::vector<int> pendings;

	for (std::size_t i = 0; i < deq.size(); i += 2)
	{
		if (i + 1 < deq.size())
		{
			int a = deq[i];
			int b = deq[i + 1];
			if (a > b)
				std::swap(a, b);
			pendings.push_back(a);
			mainChain.push_back(b);
		}
		else
			mainChain.push_back(deq[i]);
	}

	PmergeMe::sortDeque(mainChain);

	for (std::size_t i = 0; i < pendings.size(); ++i)
	{
		int value = pendings[i];
		std::deque<int>::iterator it = mainChain.begin();
		std::deque<int>::iterator end = mainChain.end();
		while (it < end)
		{
			std::deque<int>::iterator mid = it + (end - it) / 2;
			if (*mid < value)
				it = mid + 1;
			else
				end = mid;
		}
		mainChain.insert(it, value);
	}
	deq = mainChain;
}


void	PmergeMe::sortDeq()
{
	long	start = getTimeMicroseconds();
	PmergeMe::sortDeque(dlst);
	timeDeq = getTimeMicroseconds() - start;
}


long	PmergeMe::getTimeMicroseconds() 
{
    struct timeval time;
    gettimeofday(&time, NULL);
    return (time.tv_sec * 1000000 + time.tv_usec);
}


void	PmergeMe::ShowLst()
{
	std::cout << "Before: ";

	for (std::vector<int>::iterator it = lst_befor.begin(); it != lst_befor.end(); ++it)
	{
		std::cout << *it << ' ';
	}
	std::cout << std::endl;
	
	std::cout << "After: ";
	for (std::vector<int>::iterator it = vlst.begin(); it != vlst.end(); ++it)
	{
		std::cout << *it << ' ';
	}
	std::cout << std::endl << "Time to process a range of " << vlst.size() << " elements with std::vector : " << timeVec << " microseconds." << std::endl;
	std::cout << "Time to process a range of " << vlst.size() << " elements with std::deque : " << timeDeq << " microseconds." << std::endl;
}