/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:31:47 by alappas           #+#    #+#             */
/*   Updated: 2024/04/19 01:59:54 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*   generate(void){
    int i = rand() % 3;
    switch (i){
        case 0:
            return new A;
        case 1:
            return new B;
        case 2:
            return new C;
        default:
            return NULL;
    }
    return (NULL);
}

void    identify(Base* p){
    if (dynamic_cast<A *>(p))
        std::cout << "Pointer is type A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "Pointer is type B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "Pointer is type C" << std::endl;
    else
        std::cout << "Pointer type unknown" << std::endl;
}

void    identify(Base& p){
    try{
        A &a = dynamic_cast<A &>(p);
        std::cout << "Pointer is type A" << std::endl;
        static_cast<void>(a);
    }
    catch (const std::bad_cast&){}
    try{
        B &b = dynamic_cast<B &>(p);
        std::cout << "Pointer is type B" << std::endl;
         static_cast<void>(b);
    }
    catch (const std::bad_cast&){}
    try{
        C &c = dynamic_cast<C &>(p);
        std::cout << "Pointer is type C" << std::endl;
         static_cast<void>(c);
    }
    catch (const std::bad_cast&){}
}

int main(){
    std::srand(std::time(NULL));
    Base *base = generate();
    identify(base);
    identify(*base);
    delete base;
    return (0);
}