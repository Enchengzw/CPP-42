/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:30:43 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 18:37:30 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog(void) : Animal("Dog"){
	std::cout << "Dog Animal constructor called" << std::endl;
	return ;
}

Dog::Dog(const Dog &src){
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return ;
}

Dog& Dog::operator=( const Dog &src){
	std::cout << "Dog copy assignment called" << std::endl;
	this->_type = src._type;
	return (*this);
}

Dog::~Dog(void){
	std::cout << "Dog destructor called" << std::endl;
	delete(this->_brain);
	return ;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof Woof Woof!" << std::endl;
	return ;
}