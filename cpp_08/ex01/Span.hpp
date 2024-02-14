/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 03:17:20 by alappas           #+#    #+#             */
/*   Updated: 2024/02/13 04:49:40 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>

class Span{
	private:
		unsigned int _size;
	public:
		std::vector<int> _span;
		Span();
		Span(unsigned int size);
		Span(const Span & other);
		Span&operator=(const Span & other);
		~Span();

		void addNumber(int n);
		void manyNumbers(unsigned int n);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
		unsigned int getSize() const;
		std::vector<int>::const_iterator getBegin() const;
		std::vector<int>::const_iterator getEnd() const;

};