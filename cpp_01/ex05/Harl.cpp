/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 04:16:47 by alappas           #+#    #+#             */
/*   Updated: 2024/01/29 19:29:08 by alappas          ###   ########.fr       */
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
    void (Harl::*harlptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string words[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (words[i] == level)
        {
            (this->*harlptr[i])();
            break ;
        }
    }
}