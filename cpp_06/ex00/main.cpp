/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 00:01:09 by alappas           #+#    #+#             */
/*   Updated: 2024/02/11 02:08:22 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv){
    
    if (argc != 2)
    {
        std::cerr << "Wrong amount of arguments!" << std::endl;
        return (0);
    }
    if (isalpha(argv[1][0]) && argv[1][1])
    {
        std::cerr << "Only single characters are accepted!" << std::endl;
        return (0);
    }
    std::string string(argv[1]);
    
    ScalarConverter::convert(string);
    std::cout << std::endl;
}