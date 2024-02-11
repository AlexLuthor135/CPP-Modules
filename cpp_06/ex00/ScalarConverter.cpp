/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:11:06 by alappas           #+#    #+#             */
/*   Updated: 2024/02/11 03:03:02 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter constructor init" << std::endl;
}

ScalarConverter::~ScalarConverter(){
	std::cout << "ScalarConverter destructor init" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter & other)
{
	std::cout << "ScalarConverter copy constructor init" << std::endl;
	(void) other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter & other){
	std::cout << "ScalarConverter assignment operator init" << std::endl;
	(void) other;
	return (*this);
}

void ScalarConverter::convert(const std::string string)
{
	float	f = 0.0f;
	if (string.size() == 1 && isalpha(string[0]))
	{
		const char ch = static_cast<char>(string[0]);
		f = static_cast<float>(ch);
	}
	else	
		f = atof(string.c_str());
	if (std::isnan(f)){
		std::cout << "The input is nan!" << std::endl;
		return ;
	}
	if (std::isinf(f)){
		std::cout << "The input is infinite!" << std::endl;
		return ;
	}
	if ((static_cast<int>(f) >= CHAR_MIN && static_cast<int>(f) <= CHAR_MAX) && isprint(f))
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	else
		std::cout << "Wrong input for char" << std::endl;
	if ((static_cast<int>(f) > INT_MIN && static_cast<int>(f) < INT_MAX))
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	else
		std::cout << "Wrong input for int" << std::endl;
	if (std::floor(f) == f)
	{
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double " << static_cast<double>(f) << ".0" << std::endl;
	}
	else
	{
		 std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double " << static_cast<double>(f) << std::endl;
	}
}
