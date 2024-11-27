/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 09:50:26 by vboxuser          #+#    #+#             */
/*   Updated: 2024/11/26 15:21:39 by njeanbou         ###   ########.fr       */
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
	std::ifstream ifs(this->inFile.c_str());
	if (ifs.is_open())
	{
		std::string content;
		if (std::getline(ifs, content, '\0'))
		{
			std::ofstream ofs(this->outFile.c_str());
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
			std::cout << "No surch text in " << this->inFile << std::endl;
	}
	else
		std::cout << "No such file in directory : " << this->inFile << std::endl;
	ifs.close();
}