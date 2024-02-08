/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:06:25 by alappas           #+#    #+#             */
/*   Updated: 2024/02/08 03:57:26 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
: _name("Default Aform"), _signed(false), _signGrade(150), _executeGrade(150){
    std::cout << "AForm constructor init" << std::endl;
}

AForm::~AForm(){
    std::cout << "AForm destructor init" << std::endl;
}

AForm::AForm(std::string name, int signGrade, int executeGrade)
: _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade){
    if (_signGrade < 1)
        throw AForm::GradeTooHighException();
    if (_signGrade > 150)
        throw AForm::GradeTooLowException();
    if (_executeGrade < 1)
        throw AForm::GradeTooHighException();
    if (_executeGrade > 150)
        throw AForm::GradeTooLowException();
    std::cout << "AForm full constructor init" << std::endl;
}

AForm::AForm(const AForm & other)
: _name(other._name), _signed(false), _signGrade(other._signGrade), _executeGrade(other._executeGrade) {
    if (_signGrade < 1)
        throw AForm::GradeTooHighException();
    if (_signGrade > 150)
        throw AForm::GradeTooLowException();
    if (_executeGrade < 1)
        throw AForm::GradeTooHighException();
    if (_executeGrade > 150)
        throw AForm::GradeTooLowException();
    std::cout << "AForm copy constructor init" << std::endl;
    *this = other;
}

AForm& AForm::operator=(const AForm & other){
    std::cout << "AForm assignment operator init" << std::endl;
    this->_name = other._name;
    this->_signed = other._signed;
    return (*this);
}

const char* AForm::GradeTooHighException::what() const throw(){
    return "Grade Too High";
}

const char* AForm::GradeTooLowException::what() const throw(){
    return "Grade Too Low";
}

const char* AForm::NotSignedException::what() const throw(){
    return "Form not signed";
}

const std::string& AForm::getName() const{
    return this->_name;
}

int AForm::getSignGrade() const{
    return this->_signGrade;
}

int AForm::getExecuteGrade() const{
    return this->_executeGrade;
}

bool AForm::getSigned() const{
    return this->_signed;
}

void AForm::beSigned(const Bureaucrat& bureaucrat){
    if (bureaucrat.getGrade() <= this->getSignGrade()){
        this->_signed = true;
        std::cout << bureaucrat.getName() << " has signed AForm " << this->getName() << std::endl;
    }
    else{
        std::cout << bureaucrat.getName() << " couldn't sign AForm " << this->getName() << ". Minimum grade required: " << this->getSignGrade() << ". Current grade: " 
            << bureaucrat.getGrade() << std::endl;
        throw AForm::GradeTooLowException();
    }
    
}

std::ostream& operator<<(std::ostream& stream, const AForm& other)
{
    stream << "AForm " << other.getName() << ", status: " << (other.getSigned() ? "signed" : "not signed")
    << ", sign grade: " << other.getSignGrade() << ", execute grade: " << other.getExecuteGrade();
    return (stream);
}
