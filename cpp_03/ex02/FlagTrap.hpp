/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:51:07 by alappas           #+#    #+#             */
/*   Updated: 2024/02/01 20:07:08 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP
#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
    public:
        FlagTrap();
        FlagTrap(std::string name);
        ~FlagTrap();
        void    attack(const std::string & target);
        void    highFivesGuys(void);
};

#endif