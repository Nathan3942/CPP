/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 05:10:48 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/24 05:30:29 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

Sed::Sed(std::string filename) : inFile(filename)
{
	this->outFile = this->inFile + ".remplace";
}

Sed::~Sed()
{
	std::cout << "Destructor" << std::endl;
}

void	Sed::remplace(std::string s1, std::string s2)
{
	std::ifstream ifs(this->inFile);
	if (ifs.is_open())
	{
		std::string content;
		if (std::getline(ifs, content, '\0'))
		{
			std::ofstream ofs(this->outFile);
			size_t	pos = content.find(s1);
			while (pos != std::string::npos)
			{
				content.erase(pos, s1.length());
				content.insert(pos, s2);
				pos = content.find(s1);
			}
			ofs << content;
			ofs.close();
		}
		else
			std::cerr << "Empty file found" << std::endl;
		ifs.close();
	}
	else
	{
		std::cerr << "Unable to open the file" << std::endl;
		exit(EXIT_FAILURE);
	}
}