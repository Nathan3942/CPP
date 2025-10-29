/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:57:25 by njeanbou          #+#    #+#             */
/*   Updated: 2025/05/22 18:27:38 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <math.h>

class PmergeMe
{
    private:
        

		std::vector<int>	mergeSort(std::vector<int>& v);
    public:
		std::vector<int> _vlst;

        PmergeMe(char** av, int ac);
        PmergeMe(const PmergeMe& copy);
		~PmergeMe();

		void	sort();


};


#endif