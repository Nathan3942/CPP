/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:06:23 by njeanbou          #+#    #+#             */
/*   Updated: 2024/05/23 22:16:03 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

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
}

void    PhoneBook::searchContact()
{
	if (totalContact == 0)
	{
		std::cout << "No contacts set" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|"
		<< std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << std::endl;
	
	for (int i = 0; i < totalContact; i++)
	{
		std::cout << std::setw(10) << i << "|"
				<< std::setw(10) << (contact[i].getFirstName().length() > 10 ? contact[i].getFirstName().substr(0, 9) + "." : contact[i].getFirstName()) << "|"
				<< std::setw(10) << (contact[i].getLastName().length() > 10 ? contact[i].getLastName().substr(0, 9) + "." : contact[i].getLastName()) << "|"
				<< std::setw(10) << (contact[i].getNickName().length() > 10 ? contact[i].getNickName().substr(0, 9) + "." : contact[i].getNickName()) << std::endl;
	}

	std::cout << "Enter the index of the contact: ";
	int index;
	bool valid = false;
	do
	{
		std::cin >> index;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cout << "Invalid index, re-enter" << std::endl;
		}
		else if (index < 0 || index >= totalContact)
		{
			std::cout << "Invalid index, re-enter" << std::endl;
			std::cin.clear();
		}
		else if (std::cin.good())
		{
			contact[index].displayContact();
			valid = true;
		}
	} while (!valid);
}
