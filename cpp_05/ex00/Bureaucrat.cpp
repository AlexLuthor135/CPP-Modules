/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:06:25 by alappas           #+#    #+#             */
/*   Updated: 2024/02/08 04:08:56 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    std::cout << "Bureaucrat constructor init" << std::endl;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat destructor init" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade){
    _name = name;
    _grade = grade;
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Bureaucrat full constructor init" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat & other)
: _name(other._name){
    std::cout << "Bureaucrat copy constructor init" << std::endl;
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat & other){
    std::cout << "Bureaucrat assignment operator init" << std::endl;
    this->_grade = other._grade;
    return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade Too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade Too Low";
}

const std::string& Bureaucrat::getName() const{
    return (this->_name);
}

int Bureaucrat::getGrade() const{
    return this->_grade;
}

void    Bureaucrat::increment(){
    std::cout << "Incrementing " << this->_name << "'s grade " << this->_grade-- << " by 1" << std::endl;
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Grade now is equal to " << _grade << std::endl;
}

void    Bureaucrat::decrement()
{
    std::cout << "Decrementing " << this->_name << "'s grade " << this->_grade++ << " by 1" << std::endl;
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Grade now is equal to " << _grade << std::endl;
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& other)
{
    return (stream << other.getName() << ", bureaucrat grade " << other.getGrade());
}