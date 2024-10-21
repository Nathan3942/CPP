/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:50:34 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/21 17:05:48 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook() : index(0), totalContact(0) {}

void    PhoneBook::addContact()
{
    if (totalContact < 8)
    {
        contact[totalContact].setContact();
        totalContact++;
    }
    else
    {
        contact[index].setContact();
        index = (index + 1) % 8;
    }
    return ;
}

int PhoneBook::getIndex(int totalContact)
{
    int id = 0;
    bool valid = false;
    std::string input;

    std::cout << "Enter index: ";
    while (!valid)
    {
        std::getline(std::cin, input);
        if (input.empty())
        {
            std::cout << "\033[F" << "\033[K";
            std::cout << "Re-enter index: ";
            continue;
        }
        try
        {
            if (input.compare("0") == 0)
            {
				valid = true;
            	break;
            }
            id = std::atoi(input.c_str());
            if (id <= 0 || id >= totalContact)
            {
                throw std::invalid_argument("Invalid index");
            }
            valid = true;
        }
        catch (const std::invalid_argument& e)
        {
            std::cout << "\033[F" << "\033[K";
            std::cout << "Invalid input. Re-enter index: ";
        }
    }

    return id;
}

void    PhoneBook::searchContact()
{
    if (totalContact < 1)
    {
        std::cout << "No contact set!" << std::endl;
        return ;
    }

    std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|"
        << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nick Name" << "|" << std::endl;
    for(int i = 0; i < totalContact; i++)
    {
        std::cout << std::setw(10) << i << "|"
            << std::setw(10) << (contact[i].getFirstName().length() > 10 ? contact[i].getFirstName().substr(0, 9) + "." : contact[i].getFirstName()) << "|"
            << std::setw(10) << (contact[i].getLastName().length() > 10 ? contact[i].getLastName().substr(0, 9) + "." : contact[i].getLastName()) << "|"
            << std::setw(10) << (contact[i].getNickName().length() > 10 ? contact[i].getNickName().substr(0, 9) + "." : contact[i].getNickName()) << "|" << std::endl;
    }
    int index = PhoneBook::getIndex(totalContact);
    std::cout << "\033[2J\033[H";
    contact[index].displayContact();
    std::cout << std::endl << "Press enter to continue...";
    std::cin.get();
    std::cout << "\033[2J\033[H";
    return ;
}
