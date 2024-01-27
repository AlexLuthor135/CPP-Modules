/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:41:22 by alappas           #+#    #+#             */
/*   Updated: 2024/01/27 00:20:17 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    std::cout << "Memory addresses:" << std::endl;
    std::cout << "Printing address of variable: " << &string << std::endl;
    std::cout << "Printing pointer of variable: " << stringPTR << std::endl;
    std::cout << "Printing reference of variable: " << &stringREF << std::endl << std::endl;
    std::cout << "Values:" << std::endl;
    std::cout << "Printing value of variable: " << string << std::endl;
    std::cout << "Printing value of pointer: " << *stringPTR << std::endl;
    std::cout << "Printing value of reference: " << stringREF << std::endl;
    return (0);
}