/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 05:40:10 by njeanbou          #+#    #+#             */
/*   Updated: 2025/02/11 06:22:06 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    // Test de base
    Span sp(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    // Test avec une plage d'itérateurs
    std::vector<int> moreNumbers;
    moreNumbers.push_back(100);
    moreNumbers.push_back(200);
    moreNumbers.push_back(150);

    Span sp2(10);
    sp2.addNumbers(moreNumbers.begin(), moreNumbers.end());

    std::cout << "Shortest span (iterator range): " << sp2.shortestSpan() << std::endl;
    std::cout << "Longest span (iterator range): " << sp2.longestSpan() << std::endl;

    // Test avec 10 000 nombres
    Span sp3(10000);
    for (int i = 0; i < 10000; ++i) {
        sp3.addNumber(i);
    }

    std::cout << "Shortest span (10,000 numbers): " << sp3.shortestSpan() << std::endl;
    std::cout << "Longest span (10,000 numbers): " << sp3.longestSpan() << std::endl;

    return 0;
}