/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:37:52 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 17:58:40 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>
#include <Cat.hpp>
#include <Animal.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wj = new WrongCat();
	std::cout << wj->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	wmeta->makeSound();
	delete meta;
	delete j;
	delete i;
	delete wmeta;
	delete wj;
	return (0);
}