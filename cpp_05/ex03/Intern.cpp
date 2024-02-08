/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:06:25 by alappas           #+#    #+#             */
/*   Updated: 2024/02/08 07:21:02 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

const char* Intern::FormException::what() const throw(){
    return "Form exception error";
}

Intern::Intern()
{
    std::cout << "Intern constructor init" << std::endl;
}

Intern::~Intern(){
    std::cout << "Intern destructor init" << std::endl;
}

Intern::Intern(const Intern & other)
{
    (void) other;
}

Intern& Intern::operator=(const Intern & other){
    std::cout << "Intern assignment operator init" << std::endl;
    (void) other;
    return (*this);
}

AForm *makePresident(std::string target){
    return (new PresidentialPardonForm(target));
}
AForm *makeBerry(std::string target){
    return (new ShrubberyCreationForm(target));
}
AForm *makeRobot(std::string target){
    return (new RobotomyRequestForm(target));
}

AForm *Intern::makeForm(std::string formName, std::string target){
    
    AForm *(*forms[])(const std::string target) = {&makeBerry, &makeRobot, &makePresident};
    std::string names[] = {"berry form", "robot form", "president form"};
    for (int i = 0; i < 3; i++)
    {
        if (formName == names[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return (forms[i](target));
            
        }
    }
    throw FormException();
}
