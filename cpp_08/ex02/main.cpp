/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:39:22 by alappas           #+#    #+#             */
/*   Updated: 2024/02/14 20:47:34 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(){
    std::cout << "========== MUTANT STACK ==========" << std::endl;

	MutantStack<int, std::vector<int> > mstack;
	mstack.push(5); // 5
	mstack.push(17); // 17, 5
	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.pop(); // 5
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3); // 3, 5
	mstack.push(7); // 7, 3, 5
	mstack.push(737); // 737, 7, 3, 5
	mstack.push(0); // 0, 737, 7, 3, 5
	std::cout << "Size: " << mstack.size() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << std::endl << "ITERATE STACK:" << std::endl;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "========== VECTOR ==========" << std::endl;
	
	std::vector<int> ls;
	ls.push_back(5);
	ls.push_back(17);
	std::cout << "Back: " << ls.back() << std::endl;
	ls.pop_back();
	std::cout << "Size: " << ls.size() << std::endl;
	ls.push_back(3);
	ls.push_back(7);
	ls.push_back(737);
	ls.push_back(0);
	std::cout << "Size: " << ls.size() << std::endl;
	std::vector<int>::iterator lit = ls.begin();
	std::vector<int>::iterator lite = ls.end();
	++lit;
	--lit;
	std::cout << std::endl << "ITERATE VECTOR:" << std::endl;
	while (lit != lite) {
		std::cout << *lit << std::endl;
		++lit;
	}

    // std::cout << "========== SUPER MUTANT STACK ==========" << std::endl;

    // SuperMutant<int, std::list<int> > mstack2;
	// mstack2.push(5); // 5
	// mstack2.push(17); // 17, 5
	// std::cout << "Top: " << mstack2.top() << std::endl;
	// mstack2.pop(); // 5
	// std::cout << "Size: " << mstack2.size() << std::endl;
	// mstack2.push(3); // 3, 5
	// mstack2.push(7); // 7, 3, 5
	// mstack2.push(737); // 737, 7, 3, 5
	// mstack2.push(0); // 0, 737, 7, 3, 5
	// std::cout << "Size: " << mstack2.size() << std::endl;
	// SuperMutant<int, std::list<int> >::iterator it2 = mstack2.begin();
	// SuperMutant<int, std::list<int> >::iterator ite2 = mstack2.end();
	// ++it2;
	// --it2;
	// std::cout << std::endl << "ITERATE STACK:" << std::endl;
	// while (it2 != ite2) {
	// 	std::cout << *it2 << std::endl;
	// 	++it2;
	// }
	// std::stack<int, std::list<int> > s2(mstack2);
    
	return 0;
}