/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:06:51 by njeanbou          #+#    #+#             */
/*   Updated: 2025/04/10 14:29:47 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade < 1)
        throw GradeToHeighException();
    else if (grade > 150)
        throw GradeToLowException();
    this->grade = grade;
    // std::cout << "Bureaucrat : default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name)
{
    if (copy.grade < 1)
        throw GradeToHeighException();
    else if (copy.grade > 150)
        throw GradeToLowException();
    this->grade = copy.grade;
    // std::cout << "Bureaucrat : Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    // std::cout << "Bureaucrat : Default destructor called" << std::endl;
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

void    Bureaucrat::signForm(AForm& form)
{
    if (this->grade <= form.getSigneNote())
        std::cout << this->name << " signed " << form.getName() << std::endl;
    else 
        std::cout << this->name << " cannot signed " << form.getName() << std::endl;
    form.beSigned(*this);
}

void    Bureaucrat::executeAForm(const AForm& form)
{
    if (this->grade <= form.getExecNote())
        std::cout << this->name << " execute " << form.getName() << std::endl;
    else
        std::cout << this->name << " cannot execute " << form.getName() << std::endl;

    form.execute(*this);
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
        throw GradeToLowException();
    this->grade++;
}

void Bureaucrat::decrement()
{
    if (this->grade <= 1)
        throw GradeToHeighException();
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

