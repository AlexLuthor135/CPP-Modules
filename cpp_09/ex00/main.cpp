/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:56:00 by alappas           #+#    #+#             */
/*   Updated: 2024/02/16 21:46:13 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	ft_error(int i)
{
	if (i == 0)
		std::cerr << "Wrong amount of arguments" << std::endl;
	if (i == 1)
		std::cerr << "Wrong file path" << std::endl;
	return (1);
}

int main(int argc, char **argv){
    if (argc != 2)
        return (ft_error(0));
    std::ifstream inputFile(argv[1]);
    if (!inputFile.is_open())
        return (ft_error(1));
    
    
}