/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:27:04 by njeanbou          #+#    #+#             */
/*   Updated: 2025/04/08 18:31:19 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        std::string _name;
        bool    _isSigned;
        int	_signeNote;
		int	_execNote;
		virtual void    execForm() const = 0;

	public:
		AForm(std::string name, int signeNote, int execNote);
		AForm(const AForm& copy);
		virtual ~AForm();

		AForm&	operator=(const AForm& equal);

		void	beSigned(Bureaucrat& bur);
		int		execute(const Bureaucrat& executor) const;
		

		std::string getName() const;
		bool	getSigned() const;
		int		getSigneNote() const;
		int		getExecNote() const;

		class GradeTooLow : public std::exception
        {
        	const char* what() const throw();
    	};

    	class GradeTooHeigh : public std::exception
    	{
    		const char* what() const throw();
    	};

		class NotSigned : public std::exception
		{
			const char* what() const throw();
		};
		// class GradeTooLow : public std::exception
		// {
		// 	private: 
		// 		std::string _msg;
		// 	public:
		// 	GradeTooLow(const std::string& msg);
		// 	virtual const char* what() const throw();
		// };

		// class GradeTooHeigh : public std::exception
		// {
		// 	private:
		// 		std::string _msg;
		// 	public:
		// 		GradeTooHeigh(const std::string& msg);
		// 		virtual const char* what() const throw();
		// };

};

std::ostream&	operator<<(std::ostream& out, const AForm& Aform);

#endif 