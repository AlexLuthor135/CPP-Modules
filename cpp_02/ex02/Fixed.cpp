/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:03:09 by alappas           #+#    #+#             */
/*   Updated: 2024/02/01 02:51:41 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed = 0;
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
: fixed(num << bits)
{
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num)
: fixed(static_cast<int>(roundf(num * (1 << bits))))
{
    // std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)

{
    // std::cout << "Copy constructor called" << std::endl;
    *this = other;
}
Fixed& Fixed::operator=(const Fixed & other)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    this->fixed = other.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& other)
{
    return (stream << other.toFloat());
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits function called" << std::endl;
    return (this->fixed);
}

void    Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits function called" << std::endl;
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

//incr/decr operators

Fixed Fixed::operator++()
{
    ++(this->fixed);
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->fixed++;
    return (tmp);
}

Fixed Fixed::operator--()
{
    --(this->fixed);
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->fixed--;
    return (tmp);
}

//math operators

//comparison operators

bool Fixed::operator>(const Fixed &other) const
{
    return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const
{
    return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
    return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const
{
    return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const
{
    return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const
{
    return (this->getRawBits() != other.getRawBits());
}

//functions

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    return (a.getRawBits() < b.getRawBits()) ? a : b;
}
const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a.getRawBits() < b.getRawBits()) ? a : b;
}
Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    return (a.getRawBits() > b.getRawBits()) ? a : b;
}
const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a.getRawBits() > b.getRawBits()) ? a : b;
}


//math operatos

Fixed Fixed::operator+(const Fixed &other)
{
    return (Fixed(this->toFloat() + other.toFloat()));
}
Fixed Fixed::operator-(const Fixed &other)
{
    return (Fixed(this->toFloat() - other.toFloat()));
}
Fixed Fixed::operator*(const Fixed &other)
{
    return (Fixed(this->toFloat() * other.toFloat()));
}
Fixed Fixed::operator/(const Fixed &other)
{
    return (Fixed(this->toFloat() / other.toFloat()));
}