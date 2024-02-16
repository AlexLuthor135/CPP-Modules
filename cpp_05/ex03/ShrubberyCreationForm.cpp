/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:06:25 by alappas           #+#    #+#             */
/*   Updated: 2024/02/08 04:04:07 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
: AForm("ShrubberyCreationForm", 145, 137), _target("Default Target"){
    std::cout << "ShrubberyCreationForm constructor init" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm destructor init" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: AForm("ShrubberyCreationForm", 145, 137), _target(target){
    std::cout << "ShrubberyCreationForm full constructor init" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other)
: AForm(other), _target(other._target) {
    std::cout << "ShrubberyCreationForm copy constructor init" << std::endl;
    *this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & other){
    std::cout << "ShrubberyCreationForm assignment operator init" << std::endl;
    this->_target = other._target;
    return (*this);
}

void    ShrubberyCreationForm::execute(const Bureaucrat &executor) const{

    if (!getSigned())
        throw AForm::NotSignedException();
    else if (getExecuteGrade() < executor.getGrade())
        throw AForm::GradeTooLowException();
    else
    {
        std::string outputFileC = this->_target + "_shrubbery";
        const char * outputFileCStr = outputFileC.c_str();
        std::ofstream outputFile(outputFileCStr, std::ios::trunc);
        std::cout << "Initializing " << executor.getName() << "'s Shrubberries! Check the file: " << this->_target + "_shrubberry" << std::endl;
        outputFile << std::endl;
        outputFile << "            ,@@@@@@@,                 ,@@@@@@@,                 ,@@@@@@@," << std::endl;
        outputFile << "       ,,,. ,@@@@@@/@@,  .oo8888o. ,,,. ,@@@@@@/@@,  .oo8888o. ,,,. ,@@@@@@/@@,  .oo8888o." << std::endl;
        outputFile << "    ,&&%&%&&%,@@@@@/@@@@@@,8888|88/8o ,&&%&%&&%,@@@@@/@@@@@@,8888|88/8o ,&&%&%&&%,@@@@@/@@@@@@,8888|88/8o" << std::endl;
        outputFile << "   ,%&|%&&%&&%,@@@|@@@/@@@88|88888/88' ,%&|%&&%&&%,@@@|@@@/@@@88|88888/88' ,%&|%&&%&&%,@@@|@@@/@@@88|88888/88'" << std::endl;
        outputFile << "   %&&%&%&/%&&%@@|@@/ /@@@88888|88888' %&&%&%&/%&&%@@|@@/ /@@@88888|88888' %&&%&%&/%&&%@@|@@/ /@@@88888|88888'" << std::endl;
        outputFile << "   %&&%/ %&&%&&@@| V /@@' `88|8 `/88' %&&%/ %&&%&&@@| V /@@' `88|8 `/88' %&&%/ %&&%&&@@| V /@@' `88|8 `/88'" << std::endl;
        outputFile << "   `&%| ` /%&'    |.|        | '|8' `&%| ` /%&'    |.|        | '|8' `&%| ` /%&'    |.|        | '|8'" << std::endl;
        outputFile << "      |o|        | |         | |      |o|        | |         | |      |o|        | |         | |" << std::endl;
        outputFile << "      |.|        | |         | |      |.|        | |         | |      |.|        | |         | |" << std::endl;
        outputFile << "   ||/ ._|//_/__/  ,|_//__||/.  |_//__/_ ||/ ._|//_/__/  ,|_//__||/.  |_//__/_ ||/ ._|//_/__/  ,|_//__||/." << std::endl;
        outputFile.close();
    }
}


