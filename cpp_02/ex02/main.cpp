/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:28:03 by alappas           #+#    #+#             */
/*   Updated: 2024/02/01 03:02:25 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    //subject
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    
    //my tests
    int c = 5;
    int d = 3;
    std::cout << std::endl << "My tests!" << std::endl;
    std::cout << "5 + 3 = " << c + d << std::endl;
    std::cout << "5 - 3 = " << c - d << std::endl;
    std::cout << "5 * 3 = " << c * d << std::endl;
    std::cout << "5 / 3 = " << c / d << std::endl;
    std::cout << "5++ = " << c++ << std::endl;
    std::cout << "++5 = " << ++c << std::endl;
    std::cout << "5-- = " << c-- << std::endl;
    std::cout << "--5 = " << --c << std::endl;
    std::cout << "5 != 3 = " << (c != d) << std::endl;
    std::cout << "5 > 3 = " << (c > d) << std::endl;
    std::cout << "5 < 3 = " << (c < d) << std::endl;
    std::cout << "5 == 3 = " << (c == d) << std::endl;
    return 0;
}