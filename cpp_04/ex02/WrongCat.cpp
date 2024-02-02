/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 02:47:50 by alappas           #+#    #+#             */
/*   Updated: 2024/02/02 03:01:23 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat constructor init" << std::endl;
}
WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor init" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat & other){
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    this->type = other.type;
    return (*this);
}

WrongCat::WrongCat(const WrongCat& other){
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = other;
}

void    WrongCat::makeSound() const{
    std::cout << "WrongCat sound" << std::endl;
}