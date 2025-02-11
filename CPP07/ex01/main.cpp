/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 02:11:30 by njeanbou          #+#    #+#             */
/*   Updated: 2025/02/11 05:40:48 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    // Test avec un tableau d'entiers
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Tableau d'entiers avant modification : " << std::endl;
    iter(intArray, intArrayLength, printElement<int>);
    std::cout << std::endl;

    iter(intArray, intArrayLength, incrElement<int>);

    std::cout << "Tableau d'entiers après modification : " << std::endl;
    iter(intArray, intArrayLength, printElement<int>);
    std::cout << std::endl;

    // Test avec un tableau de doubles
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size_t doubleArrayLength = sizeof(doubleArray) / sizeof(doubleArray[0]);

    std::cout << "Tableau de doubles avant modification : " << std::endl;
    iter(doubleArray, doubleArrayLength, printElement<double>);
    std::cout << std::endl;

    iter(doubleArray, doubleArrayLength, incrElement<double>);

    std::cout << "Tableau de doubles après modification : " << std::endl;
    iter(doubleArray, doubleArrayLength, printElement<double>);
    std::cout << std::endl;

    return 0;
}