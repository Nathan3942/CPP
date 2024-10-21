/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:51:19 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/21 17:14:14 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::setContact()
{
	do
	{
		std::cout << "Enter first name:	";
		std::getline(std::cin, firstName);
		if (firstName.find_first_not_of(" \t") == std::string::npos)
			std::cout << "\033[F" << "\033[K";
	} while (firstName.find_first_not_of(" \t") == std::string::npos);
	do
	{
		std::cout << "Enter last name:	";
		std::getline(std::cin, lastName);
		if (lastName.find_first_not_of(" \t") == std::string::npos)
			std::cout << "\033[F" << "\033[K";
	} while (lastName.find_first_not_of(" \t") == std::string::npos);
	do
	{
		std::cout << "Enter nickname:		";
		std::getline(std::cin, nickName);
		if (nickName.find_first_not_of(" \t") == std::string::npos)
			std::cout << "\033[F" << "\033[K";
	} while (nickName.find_first_not_of(" \t") == std::string::npos);
	do
	{
		std::cout << "Enter phone number:	";
		std::getline(std::cin, phoneNumber);
		if (phoneNumber.find_first_not_of(" \t") == std::string::npos)
			std::cout << "\033[F" << "\033[K";
	} while (phoneNumber.find_first_not_of(" \t") == std::string::npos);
	do
	{
		std::cout << "Enter darkest secret:	";
		std::getline(std::cin, darkestSecret);
		if (darkestSecret.find_first_not_of(" \t") == std::string::npos)
			std::cout << "\033[F" << "\033[K";
	} while (darkestSecret.find_first_not_of(" \t") == std::string::npos);
	std::cout << "\033[2J\033[H";
	return ;
}

void	Contact::displayContact()
{
	std::cout << "First name:	" << firstName << std::endl;
	std::cout << "Last name:	" << lastName << std::endl;
	std::cout << "Nick name:	" << nickName << std::endl;
	std::cout << "Phone number:	" << phoneNumber << std::endl;
	std::cout << "Darkest secret:	" << darkestSecret << std::endl;
	return ;
}

std::string	Contact::getFirstName() const
{
	return (firstName);
}

std::string	Contact::getLastName() const
{
	return (lastName);
}

std::string Contact::getNickName() const
{
	return (nickName);
}