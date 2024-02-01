/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:54:02 by alappas           #+#    #+#             */
/*   Updated: 2024/02/01 00:07:27 by alappas          ###   ########.fr       */
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
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();
		Fixed(const Fixed & other);
		Fixed&operator=(const Fixed &other);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};
	std::ostream& operator<<(std::ostream& stream, const Fixed& other);