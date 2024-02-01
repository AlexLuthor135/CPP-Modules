/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:54:02 by alappas           #+#    #+#             */
/*   Updated: 2024/01/31 23:07:40 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Fixed{
	private:
		int	fixed;
		static const int bits = 8;
		
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed & other);
		Fixed&operator=(const Fixed &other);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};