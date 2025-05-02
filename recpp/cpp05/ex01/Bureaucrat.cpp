/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:06:51 by njeanbou          #+#    #+#             */
/*   Updated: 2025/04/08 18:25:05 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade < 1)
        throw GradeToLowException();
    else if (grade > 150)
        throw GradeToHeighException();
    this->grade = grade;
    std::cout << "Bureaucrat : default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name)
{
    if (copy.grade < 1)
        throw GradeToLowException();
    else if (copy.grade > 150)
        throw GradeToHeighException();
    this->grade = copy.grade;
    std::cout << "Bureaucrat : Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat : Default destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& equal)
{
    if (this != &equal)
    {
        this->name = equal.name;
        this->grade = equal.grade;
    }
    return (*this);
}

void    Bureaucrat::signForm(Form& form)
{
    if (this->grade <= form.getSigneNote())
        std::cout << this->name << " signed " << form.getName() << std::endl;
    else 
        std::cout << this->name << " cannot signed " << form.getName() << "for grade too low" << std::endl;
    form.beSigned(*this);
}

std::string Bureaucrat::getName() const
{
    return (name);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

void Bureaucrat::increment()
{
    if (this->grade >= 150)
        throw GradeToHeighException();
    this->grade++;
}

void Bureaucrat::decrement()
{
    if (this->grade <= 1)
        throw GradeToLowException();
    this->grade--;
}

const char* Bureaucrat::GradeToHeighException::what() const throw()
{
    return ("Grade too heigh!");
}

const char* Bureaucrat::GradeToLowException::what() const throw()
{
    return ("Grade too low!");
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bur)
{
    out << bur.getName() << ", bureaucrat grade " << bur.getGrade();
    return (out);
}

