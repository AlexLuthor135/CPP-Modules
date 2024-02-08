/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:06:25 by alappas           #+#    #+#             */
/*   Updated: 2024/02/08 03:35:58 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
: _name("Default form"), _signed(false), _signGrade(150), _executeGrade(150){
    std::cout << "Form constructor init" << std::endl;
}

Form::~Form(){
    std::cout << "Form destructor init" << std::endl;
}

Form::Form(std::string name, int signGrade, int executeGrade)
: _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade){
    if (_signGrade < 1)
        throw Form::GradeTooHighException();
    if (_signGrade > 150)
        throw Form::GradeTooLowException();
    if (_executeGrade < 1)
        throw Form::GradeTooHighException();
    if (_executeGrade > 150)
        throw Form::GradeTooLowException();
    std::cout << "Form full constructor init" << std::endl;
}

Form::Form(const Form & other)
: _name(other._name), _signed(false), _signGrade(other._signGrade), _executeGrade(other._executeGrade) {
    if (_signGrade < 1)
        throw Form::GradeTooHighException();
    if (_signGrade > 150)
        throw Form::GradeTooLowException();
    if (_executeGrade < 1)
        throw Form::GradeTooHighException();
    if (_executeGrade > 150)
        throw Form::GradeTooLowException();
    std::cout << "Form copy constructor init" << std::endl;
    *this = other;
}

Form& Form::operator=(const Form & other){
    std::cout << "Form assignment operator init" << std::endl;
    this->_name = other._name;
    this->_signed = other._signed;
    return (*this);
}

const char* Form::GradeTooHighException::what() const throw(){
    return "Grade Too High";
}

const char* Form::GradeTooLowException::what() const throw(){
    return "Grade Too Low";
}

const std::string& Form::getName() const{
    return this->_name;
}

int Form::getSignGrade() const{
    return this->_signGrade;
}

int Form::getExecuteGrade() const{
    return this->_executeGrade;
}

bool Form::getSigned() const{
    return this->_signed;
}

void Form::beSigned(const Bureaucrat& bureaucrat){
    if (bureaucrat.getGrade() <= this->getSignGrade()){
        this->_signed = true;
        std::cout << bureaucrat.getName() << " has signed Form " << this->getName() << std::endl;
    }
    else{
        std::cout << bureaucrat.getName() << " couldn't sign Form " << this->getName() << std::endl;
        std::cout << "Minimum grade required: " << this->getSignGrade() << ". Current grade: " 
            << bureaucrat.getGrade() << std::endl;
        throw Form::GradeTooLowException();
    }
    
}

std::ostream& operator<<(std::ostream& stream, const Form& other)
{
    stream << "Form " << other.getName() << ", status: " << (other.getSigned() ? "signed" : "not signed")
    << ", sign grade: " << other.getSignGrade() << ", execute grade: " << other.getExecuteGrade();
    return (stream);
}
