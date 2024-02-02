/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 02:36:31 by alappas           #+#    #+#             */
/*   Updated: 2024/02/02 03:00:37 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
: type("Default") {
    std::cout << "WrongAnimal constructor init" << std::endl;
}

WrongAnimal::WrongAnimal(std::string new_type)
: type(new_type) {
    std::cout << "WrongAniStr constructor init" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor init" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal & other){
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    this->type = other.type;
    return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = other;
}

void    WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal sound" << std::endl;
}

const std::string &WrongAnimal::getType()const{
    return (this->type);
}