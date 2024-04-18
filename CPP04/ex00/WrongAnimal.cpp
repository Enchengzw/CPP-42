/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wronganimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:02:54 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 16:04:46 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal(void) : _type(""){
	std::cout << "Default Animal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type){
	std::cout << "Type Animal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src){
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return ;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &src){
	std::cout << "Animal copy assignment called" << std::endl;
	this->_type = src._type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

std::string WrongAnimal::getType(void) const
{
	return this->_type;
}

bool WrongAnimal::setType(std::string type)
{
	if (type.empty())
		return (false);
	this->_type = type;
	return (true);
}

void WrongAnimal::makeSound(void) const
{
	if (this->_type == "Dog")
		std::cout << "Bark Bark Bark!" << std::endl;
	else if (this->_type == "Cat")
		std::cout << "Meow meooooowr!" << std::endl;
	else
		std::cout << "Confused sounds" << std::endl;
	return ;
}