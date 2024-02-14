/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 03:25:14 by alappas           #+#    #+#             */
/*   Updated: 2024/02/13 04:49:27 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int n)
: _size(n){
    this->_span.reserve(n);
}

Span::~Span(){
    this->_span.clear();
}

Span::Span(const Span& other)
: _size(other._size), _span(other._span){
    *this = other;
}

Span& Span::operator=(const Span& other){
    if (this == &other) return *this;
    this->_size = other._size;
    this->_span = other._span;
    return (*this);
}

void Span::addNumber(int n){
    if (this->_span.capacity() == this->_span.size())
        throw std::runtime_error("Vector size limit reached");
    this->_span.push_back(n);
}

void Span::manyNumbers(unsigned int n){
    std::srand(std::time(NULL));
    if (this->_span.capacity() - this->_span.size() < n)
        throw std::runtime_error("Number amount exceeds the capacity");
    for (unsigned int i = 0; i < n; i++)
        this->_span.push_back(rand());
}

unsigned int Span::shortestSpan() const{
    if (this->_span.size() < 2)
        throw std::runtime_error("Vector size is 1");
    std::vector<int> sorted = this->_span;
    std::sort(sorted.begin(), sorted.end());
    int value = sorted[1] - sorted[0];
    for (std::vector<int>::const_iterator i = sorted.begin(); i != sorted.end() - 1; ++i){
        if (*(i + 1) - *i < value)
            value = *(i + 1) - (*i);
    }
    return (value);
}

unsigned int Span::longestSpan() const{
    if (this->_span.size() < 2)
        throw std::runtime_error("Vector size is 1");
    return *(std::max_element(this->_span.begin(), this->_span.end()))
        - *(std::min_element(this->_span.begin(), this->_span.end()));
}

unsigned int Span::getSize() const{
    return (this->_size);
}

std::vector<int>::const_iterator Span::getBegin() const{
    return (_span.begin());
}

std::vector<int>::const_iterator Span::getEnd() const{
    return (_span.end());
}