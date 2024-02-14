#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <list>
#include <vector>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T>{
    public:
        MutantStack(){};
        MutantStack(const MutantStack &other) : std::stack<T>(other){
            *this = other;
        }
        ~MutantStack(){}
        MutantStack& operator=(const MutantStack& other){
            if (this == &other) {return (*this);}
            this->std::stack<T>::operator=(other);
            return (*this);
        }
    
    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin() {return this->std::stack<T>::c.begin();}
    iterator end() {return this->std::stack<T>::c.end();}
};

// template <typename T1, typename T2 = vector<int>>
// class SuperMutant : public std::stack<T1, T2>{
//     public:
//         SuperMutant(){};
//         SuperMutant(const SuperMutant &other) : std::stack<T1, T2>(other){
//             *this = other;
//         }
//         ~SuperMutant(){}
//         SuperMutant& operator=(const SuperMutant& other){
//             if (this == &other) {return (*this);}
//             this->std::stack<T1, T2>::operator=(other);
//             return (*this);
//         }
    
//     typedef typename std::stack<T1, T2>::container_type::iterator iterator;

//     iterator begin() {return this->std::stack<T1, T2>::c.begin();}
//     iterator end() {return this->std::stack<T1, T2>::c.end();}
// };


#endif