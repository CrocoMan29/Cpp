/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:24:19 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/16 04:32:41 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main (){
// 	// Animal ani;
// 	// Cat dina;

// 	// std::cout << ani.getType << std::endl;
// 	// std::cout << dina.getType << std::endl;
// 	const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// meta->makeSound();
// delete meta;
// WrongCat *wrong = new WrongCat();
// wrong->makeSound();
// delete wrong;
// return 0;
std::string input;
std::cout << "Enter a command: ";
getline(std::cin, input);
std::cout << input << std::endl;
}