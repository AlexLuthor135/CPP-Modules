/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 01:00:17 by alappas           #+#    #+#             */
/*   Updated: 2024/02/12 01:10:40 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <class T>
void    swap(T &a, T &b){
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <class T>
T	min(T a, T b){
	if (a == b)
		return (b);
	return ((a < b) ? a : b);
}

template <class T>
T	max(T a, T b){
	if (a == b)
		return (b);
	return ((a > b) ? a : b);
}

#endif