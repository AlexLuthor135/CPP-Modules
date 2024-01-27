/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 04:16:37 by alappas           #+#    #+#             */
/*   Updated: 2024/01/27 05:10:02 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        return (std::cout << "Wrong arguments" << std::endl, 1);
    Harl harl;
    std::string complain = argv[1];
    harl.complain(complain);
    
}