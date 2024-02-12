/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 01:15:04 by alappas           #+#    #+#             */
/*   Updated: 2024/02/12 03:18:40 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
    try{
        Array<int> A = Array<int>(10);
        Array<int> B = A;
        A[1] = 2;
        for (int i = 0; i < 7; i++)
            B[i] = 7;
        for(int i = 0; i < 7; i++)
            A[i] = i + 1;
        std::cout << "Size is: " << A.size() << std::endl;
        for(int i = 0; i < 10; i++)
            std::cout << "Array A: " << A[i] << std::endl;
        for(int i = 0; i < 70; i++)
            std::cout << "Array B: " << B[i] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what();
    }
}