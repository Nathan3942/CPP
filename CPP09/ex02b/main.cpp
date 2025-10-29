/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:56:50 by njeanbou          #+#    #+#             */
/*   Updated: 2025/05/22 16:54:20 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int ac, char** av)
{
    if (ac < 2)
    {
        std::cerr << "Wrong argument!" << std::endl;
        return (1);
    }
    PmergeMe merg(av, ac);
    merg.sort();

    std::cout << "lst trie" << std::endl;
	for (size_t i = 0; i < merg._vlst.size(); ++i)
		std::cout << merg._vlst[i] << " ";
	std::cout << std::endl;

    return (0);
}