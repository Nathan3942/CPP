/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:51:51 by njeanbou          #+#    #+#             */
/*   Updated: 2024/05/24 15:34:47 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main (void)
{
	PhoneBook phonebook;
	std::string command;

	std::cout << "\033[2J\033[H";
	std::cout << "Welcome to PhoneBoooooooook!!!" << std::endl;
	while (true)
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, command);
		if (command == "EXIT" || command == "exit")
		{
			std::cout << "\033[2J\033[H";
			break;		
		}
		else if (command == "ADD" || command == "add")
		{
			std::cout << "\033[2J\033[H";
			phonebook.addContact();
		}
		else if (command == "SEARCH" || command == "search")
		{
			std::cout << "\033[2J\033[H";
			phonebook.searchContact();
		}
		else
		{
			std::cout << "\033[2J\033[H";
			std::cout << "Invalide command" << std::endl;
		}
	}
	return (0);
}
