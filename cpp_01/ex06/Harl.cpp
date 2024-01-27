/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 04:16:47 by alappas           #+#    #+#             */
/*   Updated: 2024/01/27 05:09:36 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
: i(-1) {}

int    Harl::getswitch()
{
    return (i);
}

void    Harl::setswitch(std::string level)
{
    if (level == "DEBUG")
        this->i = 0;
    if (level == "INFO")
        this->i = 1;
    if (level ==  "WARNING")
        this->i = 2;
    if (level == "ERROR")
        this->i = 3;
}

void    Harl::debug(void)
{
    std::cout << "Debug message." << std::endl;
}

void    Harl::info(void)
{
    std::cout << "Info message." << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "Warning message." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "Error message." << std::endl;
}

void    Harl::complain(std::string level)
{
    Harl harl;
    void (Harl::*debug)() = &Harl::debug;
    void (Harl::*info)() = &Harl::info;
    void (Harl::*warning)() = &Harl::warning;
    void (Harl::*error)() = &Harl::error;
    harl.setswitch(level);
    switch(harl.i){
        case 0:
            (harl.*debug)();
            (harl.*info)();
            (harl.*warning)();
            (harl.*error)();
            break ;
        case 1:
            (harl.*info)();
            (harl.*warning)();
            (harl.*error)();
            break ;
        case 2:
            (harl.*warning)();
            (harl.*error)();
            break ;
        case 3:
            (harl.*error)();
            break ;
        default:
            std::cout << "Wrong input" << std::endl;
    }
}