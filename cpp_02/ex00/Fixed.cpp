/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:03:09 by alappas           #+#    #+#             */
/*   Updated: 2024/01/31 23:13:49 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)

{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}
Fixed& Fixed::operator=(const Fixed & other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed = other.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits function called" << std::endl;
    return (this->fixed);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits function called" << std::endl;
    this->fixed = raw;
}