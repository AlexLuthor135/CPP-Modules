/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 02:11:33 by alappas           #+#    #+#             */
/*   Updated: 2024/02/12 03:15:23 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<class T>
Array<T>::Array(){
    this->_array = NULL;
    this->_size = 0;
}

template<class T>
Array<T>::Array(unsigned int n)
: _size(n){
    this->_array = new T[_size]();
}

template<class T>
Array<T>::~Array(){
    delete[] this->_array;
}

template<class T>
Array<T>::Array(const Array &other){
    *this = other;
}

template<class T>
Array<T>& Array<T>::operator=(const Array &other){
    if (this != &other){
    if (this->_array)
        delete[] (_array);
    _size = other._size;
    _array = new T[other.size()];
    for (unsigned int i = 0; i < other.size(); i++)
        this->_array[i] = other._array[i];
    }
    return (*this);
}

template<class T>
unsigned int Array<T>::size() const{
    return (this->_size);
}

template<class T>
T &Array<T>::operator[](unsigned int i) const{
    if (i < this->size())
        return (this->_array[i]);
    else
        throw std::out_of_range("Index is out of range!");
}