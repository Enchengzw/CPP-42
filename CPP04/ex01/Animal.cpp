/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:20:08 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 15:53:06 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal(void) : _type(""){
	std::cout << "Default Animal constructor called" << std::endl;
	return ;
}

Animal::Animal(std::string type) : _type(type){
	std::cout << "Type Animal constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal &src){
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return ;
}

Animal& Animal::operator=( const Animal &src){
	std::cout << "Animal copy assignment called" << std::endl;
	this->_type = src._type;
	return (*this);
}

Animal::~Animal(void){
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

std::string Animal::getType(void) const
{
	return this->_type;
}

bool Animal::setType(std::string type)
{
	if (type.empty())
		return (false);
	this->_type = type;
	return (true);
}

void Animal::makeSound(void) const
{
	if (this->_type == "Dog")
		std::cout << "Bark Bark Bark!" << std::endl;
	else if (this->_type == "Cat")
		std::cout << "Meow meooooowr!" << std::endl;
	else
		std::cout << "Confused sounds" << std::endl;
	return ;
}