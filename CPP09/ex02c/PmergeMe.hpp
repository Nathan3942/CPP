/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 05:57:17 by njeanbou          #+#    #+#             */
/*   Updated: 2025/11/05 07:56:01 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <iostream>
#include <string>
#include <cstdlib>
#include <sys/time.h>
#include <climits>
#include <cerrno>

//pour random 3000
#include <algorithm>

class PmergeMe
{
    private:
        std::vector<unsigned int> vec_lst;
        std::deque<unsigned int> deq_lst;
        std::vector<unsigned int> start_lst;

        long    timeVec;
        long    timeDeq;

        static void vector_sort(std::vector<unsigned int> &v);
        static void deque_sort(std::deque<unsigned int> &d);

    public:
        PmergeMe();
        PmergeMe(char **av, int ac);
        ~PmergeMe();

        void    vec_sort();
        void    deq_sort();

        long	getTimeMicroseconds();

        void    print_info();
};



#endif 