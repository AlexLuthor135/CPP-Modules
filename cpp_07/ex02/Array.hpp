/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 02:11:06 by alappas           #+#    #+#             */
/*   Updated: 2024/02/12 02:40:41 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <class T>
class Array{
    private:
        T* _array;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int n);
        ~Array();
        Array& operator=(Array<T> const&);
        T& operator[](unsigned int i) const;
        unsigned int size() const;
        Array(Array<T> const&);
};
#include "Array.tpp"

#endif