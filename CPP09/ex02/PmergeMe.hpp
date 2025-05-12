/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:16:04 by njeanbou          #+#    #+#             */
/*   Updated: 2025/05/12 17:22:37 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <cstdlib>
#include <sys/time.h>

class PmergeMe
{
    private:
        std::vector<int> vlst;
        std::deque<int> dlst;
		std::vector<int> lst_befor;
        long	timeVec;
		long	timeDeq;

        static void sortVector(std::vector<int>& vec);
        static void sortDeque(std::deque<int>& deq);

    public:
        PmergeMe(char** av, int ac);
        PmergeMe(const PmergeMe& copy);
        ~PmergeMe();

        PmergeMe& operator=(const PmergeMe& equal);

        void    sortVect();
        void    sortDeq();
        
		long	getTimeMicroseconds();

        void    ShowLst();
};


#endif