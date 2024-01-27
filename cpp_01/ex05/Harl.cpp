/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 04:16:47 by alappas           #+#    #+#             */
/*   Updated: 2024/01/27 04:31:48 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

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
    if (level == "DEBUG")
        (harl.*debug)();
    else if (level == "INFO")
        (harl.*info)();
    else if (level == "WARNING")
        (harl.*warning)();
    else if (level == "ERROR")
        (harl.*error)();
    else
        std::cout << "Wrong input" << std::endl;
}