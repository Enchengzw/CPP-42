/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:37:52 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 18:24:55 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>
#include <Cat.hpp>
#include <Animal.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>

void leaks()
{
	system("leaks Animals");
}

int main()
{
	atexit(leaks);
	const Animal* j[10];
	for (int i; i < 10; i++)
	{
		if (i <= 4)
			j[i] = new Dog();
		else
			j[i] = new Cat();
	}
	for (int i; i < 10; i++)
	{
		delete j[i];
	}
	return (0);
}