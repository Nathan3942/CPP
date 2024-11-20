/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:42:12 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/20 14:21:03 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "fstream"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		virtual ~ShrubberyCreationForm();


		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& equal);

		std::string	getTarget() const;
		void	tree(const Bureaucrat& bur);
		int	execute(const Bureaucrat& bur) const;

		// class OpenFileExeption : public std::exception
		// {
		// 	const char*	what() const throw();
		// };
};

std::ofstream&	operator<<(std::ofstream& out, ShrubberyCreationForm& form);


#endif