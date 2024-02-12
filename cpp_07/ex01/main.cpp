/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 01:15:04 by alappas           #+#    #+#             */
/*   Updated: 2024/02/12 01:59:55 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void    print(std::string s){
    std::cout << "T: " << s << std::endl;
}

int main(){
const char* array[] = {"Hello", "My", "Name", "Is", "Print!"};
iter(array, 5, print);
}