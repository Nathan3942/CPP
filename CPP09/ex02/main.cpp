/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:15:42 by njeanbou          #+#    #+#             */
/*   Updated: 2025/05/12 17:17:54 by njeanbou         ###   ########.fr       */
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
    PmergeMe tri(av, ac);

    //tri.ShowLst();

    tri.sortVect();
    tri.sortDeq();

    tri.ShowLst();

    
    
}