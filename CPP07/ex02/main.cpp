/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 02:20:37 by njeanbou          #+#    #+#             */
/*   Updated: 2025/09/10 13:07:23 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    // Test de la construction sans paramètre
    Array<int> arr1;
    std::cout << "Size of arr1: " << arr1.size() << std::endl;

    // Test de la construction avec un unsigned int n
    Array<int> arr2(5);
    std::cout << "Size of arr2: " << arr2.size() << std::endl;

    // Test de l'opérateur d'indice []
    try {
        arr2[0] = 10;
        arr2[1] = 20;
        std::cout << "arr2[0]: " << arr2[0] << std::endl;
        std::cout << "arr2[1]: " << arr2[1] << std::endl;
        std::cout << "arr2[2]: " << arr2[2] << std::endl; // Doit être 0 (initialisation par défaut)
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    // Test avec un Array en const
    const Array<int> arrConst(arr2); // construit à partir de arr2
    std::cout << "Size of arrConst: " << arrConst.size() << std::endl;

    std::cout << "arrConst[0]: " << arrConst[0] << std::endl;
    std::cout << "arrConst[1]: " << arrConst[1] << std::endl;

    // Pas de modification
    // arrConst[0] = 42; 

    // Test de la construction par copie
    Array<int> arr3(arr2);
    std::cout << "Size of arr3: " << arr3.size() << std::endl;
    std::cout << "arr3[0]: " << arr3[0] << std::endl;
    std::cout << "arr3[1]: " << arr3[1] << std::endl;

    // Test de l'opérateur d'affectation
    Array<int> arr4;
    arr4 = arr2;
    std::cout << "Size of arr4: " << arr4.size() << std::endl;
    std::cout << "arr4[0]: " << arr4[0] << std::endl;
    std::cout << "arr4[1]: " << arr4[1] << std::endl;

    // Test de l'accès hors limites
    try
    {
        std::cout << "arr4[10]: " << arr4[10] << std::endl;
    }
    catch (const std::out_of_range& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}