/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:13:52 by alappas           #+#    #+#             */
/*   Updated: 2024/02/11 02:55:31 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <limits>
#include <climits>
#include <cmath>

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

class ScalarConverter{
	private:
        ScalarConverter();
	    ScalarConverter(const ScalarConverter & other);
	    ScalarConverter&operator=(const ScalarConverter & other);
	    ~ScalarConverter();
    public:
		static void	convert(std::string string);
};

#endif
