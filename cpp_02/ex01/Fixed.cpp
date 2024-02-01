/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:03:09 by alappas           #+#    #+#             */
/*   Updated: 2024/02/01 00:07:23 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
: fixed(num << bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num)
: fixed(static_cast<int>(roundf(num * (1 << bits))))
{
    std::cout << "Float constructor called" << std::endl;
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

std::ostream& operator<<(std::ostream& stream, const Fixed& other)
{
    return (stream << other.toFloat());
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits function called" << std::endl;
    return (this->fixed);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits function called" << std::endl;
    this->fixed = raw;
}

float	Fixed::toFloat(void) const
{
    return (static_cast<float>(fixed) / (1 << bits));
}

int		Fixed::toInt(void) const
{
    return (static_cast<int>(fixed >> bits));
}