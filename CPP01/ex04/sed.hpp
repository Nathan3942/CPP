/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 09:50:39 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/24 09:55:07 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_H
#define SED_H

#include <iostream>
#include <fstream>

class Sed
{
	private:
		std::string inFile;
		std::string outFile;
	public:
		Sed(std::string filename);
		~Sed();
		void	remplace(std::string s1, std::string s2);
};


#endif