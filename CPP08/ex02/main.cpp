/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 07:15:24 by njeanbou          #+#    #+#             */
/*   Updated: 2025/02/11 07:54:45 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include "MutantStack.hpp"

int main() {
    // Test avec MutantStack
    std::cout << "=== Testing MutantStack ===" << std::endl;
    MutantStack<int> mstack;

    // Ajout d'éléments
    mstack.push(5);
    mstack.push(17);
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    // Affichage du sommet de la pile
    std::cout << "Top of the stack: " << mstack.top() << std::endl;

    // Affichage de la taille de la pile
    std::cout << "Size of the stack: " << mstack.size() << std::endl;

    // Parcours avec un itérateur normal
    std::cout << "Elements (forward): ";
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Parcours avec un const itérateur
    std::cout << "Elements (const forward): ";
    for (MutantStack<int>::const_iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Parcours avec un reverse itérateur
    std::cout << "Elements (reverse): ";
    for (MutantStack<int>::reverse_iterator it = mstack.rbegin(); it != mstack.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Parcours avec un const reverse itérateur
    std::cout << "Elements (const reverse): ";
    for (MutantStack<int>::const_reverse_iterator it = mstack.rbegin(); it != mstack.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Test avec std::list pour comparaison
    std::cout << "\n=== Testing std::list ===" << std::endl;
    std::list<int> lst;

    // Ajout d'éléments
    lst.push_back(5);
    lst.push_back(17);
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    // Affichage du dernier élément de la liste
    std::cout << "Back of the list: " << lst.back() << std::endl;

    // Affichage de la taille de la liste
    std::cout << "Size of the list: " << lst.size() << std::endl;

    // Parcours avec un itérateur normal
    std::cout << "Elements (forward): ";
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Parcours avec un const itérateur
    std::cout << "Elements (const forward): ";
    for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Parcours avec un reverse itérateur
    std::cout << "Elements (reverse): ";
    for (std::list<int>::reverse_iterator it = lst.rbegin(); it != lst.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Parcours avec un const reverse itérateur
    std::cout << "Elements (const reverse): ";
    for (std::list<int>::const_reverse_iterator it = lst.rbegin(); it != lst.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;


    // // Test avec Stack
    // std::cout << "=== Testing MutantStack ===" << std::endl;
    // std::stack<int> stack;

    // // Ajout d'éléments
    // stack.push(5);
    // stack.push(17);
    // stack.push(3);
    // stack.push(5);
    // stack.push(737);
    // stack.push(0);

    // // Affichage du sommet de la pile
    // std::cout << "Top of the stack: " << stack.top() << std::endl;

    // // Affichage de la taille de la pile
    // std::cout << "Size of the stack: " << stack.size() << std::endl;

    // // Parcours avec un itérateur normal
    // std::cout << "Elements (forward): ";
    // for (MutantStack<int>::iterator it = stack.begin(); it != stack.end(); ++it) {
    //     std::cout << *it << " ";
    // }
    // std::cout << std::endl;

    // // Parcours avec un const itérateur
    // std::cout << "Elements (const forward): ";
    // for (MutantStack<int>::const_iterator it = stack.begin(); it != stack.end(); ++it) {
    //     std::cout << *it << " ";
    // }
    // std::cout << std::endl;

    // // Parcours avec un reverse itérateur
    // std::cout << "Elements (reverse): ";
    // for (MutantStack<int>::reverse_iterator it = stack.rbegin(); it != stack.rend(); ++it) {
    //     std::cout << *it << " ";
    // }
    // std::cout << std::endl;

    // // Parcours avec un const reverse itérateur
    // std::cout << "Elements (const reverse): ";
    // for (MutantStack<int>::const_reverse_iterator it = stack.rbegin(); it != stack.rend(); ++it) {
    //     std::cout << *it << " ";
    // }
    // std::cout << std::endl;

    return 0;
}