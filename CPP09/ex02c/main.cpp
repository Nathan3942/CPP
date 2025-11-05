/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 05:56:46 by njeanbou          #+#    #+#             */
/*   Updated: 2025/11/05 07:32:12 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    try
    {
        if (ac < 2)
            throw std::runtime_error("Error: not enough argument!");
        PmergeMe algo(av, ac);
        // (void)av;
        // PmergeMe algo;
        algo.vec_sort();
        algo.deq_sort();
        algo.print_info();
    }   
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return (1);
    }
    return (0);
}
