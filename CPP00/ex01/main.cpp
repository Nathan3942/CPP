/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:06:15 by njeanbou          #+#    #+#             */
/*   Updated: 2024/05/23 17:37:04 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "iostream"

int main (void)
{
    PhoneBook phonebook;
    std::string command;

    std::cout << "Welcome to PhoneBoooooook!" << std::endl;
    while (true)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, command);
        if (command == "EXIT")
            break ;
        else if (command == "ADD")
            phonebook.addContact();
        else if (command == "SEARCH")
            phonebook.searchContact();
        else
            std::cout << "Invalide command" << std::endl;
    }
    return (0);
}