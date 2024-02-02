/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 02:41:30 by alappas           #+#    #+#             */
/*   Updated: 2024/02/02 20:19:52 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    // Animal *array[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     if (i % 2 == 0)
    //         array[i] = new Dog();
    //     else
    //         array[i] = new Cat();
    //     array[i]->makeSound();
    // }
    // for (int i = 0; i < 10; i++)
    //     delete array[i];
    Dog basic;
    {
        Dog tmp = basic;
    }
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << i->getType() << " " << std::endl;
    // std::cout << j->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();
    
    // delete meta;
    // delete j;
    // delete i;

    // std::cout << "My tests!!" << std::endl;
    // const WrongAnimal *new_meta = new WrongAnimal();
    // const WrongAnimal *cat = new WrongCat();
    // std::cout << cat->getType() << " " << std::endl;
    // cat->makeSound();
    // new_meta->makeSound();

    // delete new_meta;
    // delete cat;

    return (0);
}