/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:28:51 by alappas           #+#    #+#             */
/*   Updated: 2024/02/11 18:41:06 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

#ifndef BASE_HPP
# define BASE_HPP

class Base{
    public:
        virtual ~Base(){
            std::cout << "Destructor init" << std::endl;
        };
};

#endif