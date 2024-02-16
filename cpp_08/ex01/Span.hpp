/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 03:17:20 by alappas           #+#    #+#             */
/*   Updated: 2024/02/14 20:21:54 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>
#include <algorithm>

class Span{
	private:
		unsigned int _size;
		std::vector<int> _span;
	public:
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