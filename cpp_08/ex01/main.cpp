/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 03:54:25 by alappas           #+#    #+#             */
/*   Updated: 2024/02/14 18:11:20 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(){
    std::cout << "SUBJECT TESTS!" << std::endl;
    try{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    }
    catch (const std::runtime_error& e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << "MY TESTS!" << std::endl;
    try{
        Span spook = Span(10000010);
        spook.manyNumbers(1);
        spook.manyNumbers(10000000);
        spook.addNumber(2);
        int j = 1;
        for (std::vector<int>::const_iterator i = spook.getBegin(); i != spook.getEnd(); i++){
            std::cout << "Number " << j++ << ": " << *i << std::endl;
        }
    }
    catch (const std::runtime_error& e){
        std::cerr << e.what() << std::endl;
    }
    return 0;
}