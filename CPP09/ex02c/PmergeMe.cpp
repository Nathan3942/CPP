/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 06:04:14 by njeanbou          #+#    #+#             */
/*   Updated: 2025/11/05 07:56:46 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	vec_lst.reserve(3000);

	for (unsigned int i = 0; i < 3000; ++i)
		vec_lst.push_back(i);

	std::random_shuffle(vec_lst.begin(), vec_lst.end());

	deq_lst.assign(vec_lst.begin(), vec_lst.end());

	start_lst = vec_lst;
}

PmergeMe::PmergeMe(char **av, int ac)
{
    for (int i = 1; i < ac; ++i)
    {
		errno = 0;
		char *endptr;
		long n = std::strtol(av[i], &endptr, 10);
		if (errno == ERANGE)
			throw std::runtime_error("Error: number out of range!");
		if (*endptr != '\0')
			throw std::runtime_error("Error: non-numeric argument!");
		if (n < 0)
			throw std::runtime_error("Error: negative number!");
		if (n > UINT_MAX)
			throw std::runtime_error("Error: number too large!");

		vec_lst.push_back(static_cast<unsigned int>(n));
		deq_lst.push_back(static_cast<unsigned int>(n));
    }
	start_lst = vec_lst;
}


PmergeMe::~PmergeMe()
{
	
}


void	PmergeMe::vector_sort(std::vector<unsigned int> &v)
{
	size_t n = v.size();
	if (n <= 1)
		return;
	
	std::vector<unsigned int> smaller;
	std::vector<unsigned int> larger;

	for (size_t i = 0; i + 1 < n; i += 2)
	{
		unsigned int a = v[i];
		unsigned int b = v[i + 1];

		if (a > b)
			std::swap(a, b);
		smaller.push_back(a);
		larger.push_back(b);
	}

	if (n % 2 == 1)
		smaller.push_back(v[n - 1]);
	
	vector_sort(smaller);

	for (size_t i = 0; i < larger.size(); ++i)
	{
		unsigned int value = larger[i];

		std::vector<unsigned int>::iterator pos = std::lower_bound(smaller.begin(), smaller.end(), value);
		smaller.insert(pos, value);
	}
	v = smaller;
}
//lower bound pos avant premier element egal ou superieur

void	PmergeMe::vec_sort()
{
	long start = getTimeMicroseconds();
	vector_sort(vec_lst);
	timeVec = getTimeMicroseconds() - start;
}


void	PmergeMe::deque_sort(std::deque<unsigned int> &d)
{
	size_t n = d.size();
	if (n <= 1)
		return;

	std::deque<unsigned int> smaller;
	std::deque<unsigned int> larger;

	for (size_t i = 0; i + 1 < n; i += 2)
	{
		unsigned int a = d[i];
		unsigned int b = d[i + 1];

		if (a > b)
			std::swap(a, b);
		
		smaller.push_back(a);
		larger.push_back(b);
	}

	if (n % 2 == 1)
		smaller.push_back(d[n - 1]);
	
	deque_sort(smaller);

	for (size_t i = 0; i < larger.size(); ++i)
	{
		unsigned int value = larger[i];

		std::deque<unsigned int>::iterator pos = std::lower_bound(smaller.begin(), smaller.end(), value);
		smaller.insert(pos, value);
	}
	d = smaller;
}


void	PmergeMe::deq_sort()
{
	long start = getTimeMicroseconds();
	deque_sort(deq_lst);
	timeDeq = getTimeMicroseconds() - start;
}


long	PmergeMe::getTimeMicroseconds()
{
    struct timeval time;
    if (gettimeofday(&time, NULL) == -1)
		throw std::runtime_error("Error: gettimeofday failed!");
    return (time.tv_sec * 1000000 + time.tv_usec);
}

void	PmergeMe::print_info()
{
	std::cout << "Before:";
	for (size_t i = 0; i < start_lst.size(); ++i)
	{
		std::cout << " " << start_lst[i];
	}
	std::cout << std::endl;

	std::cout << "After:";
	for (size_t i = 0; i < vec_lst.size(); ++i)
	{
		std::cout << " " << vec_lst[i];
	}
	std::cout << std::endl;
	
	std::cout << "Time to prossess a rang of " << vec_lst.size() << " element with std::vector : " << timeVec << " ms" << std::endl;

	std::cout << "Time to prossess a rang of " << deq_lst.size() << " element with std::deque : " << timeDeq << " ms" << std::endl;
}
//diff vec deq vec un bloque memoir deq plusieur, meilleur cash cpu pour vec, parcout sec plus len pr deq insert doit deplacer ou copyer des bloque memoir
