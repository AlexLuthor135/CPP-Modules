/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:54:02 by alappas           #+#    #+#             */
/*   Updated: 2024/02/01 00:21:20 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>

class Fixed{
	private:
		int	fixed;
		static const int bits = 8;
		
	public:
		//constructors
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();
		Fixed(const Fixed & other);
		Fixed&operator=(const Fixed &other);
		
		//comparison operators
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;

		//incr/decr operatos
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);
		
		//math operators
		Fixed operator+(const Fixed &other);
		Fixed operator-(const Fixed &other);
		Fixed operator*(const Fixed &other);
		Fixed operator/(const Fixed &other);
		
		//functions
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
		
		//remnants
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};
	std::ostream& operator<<(std::ostream& stream, const Fixed& other);