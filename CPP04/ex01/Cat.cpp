/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:42:41 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 18:15:16 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat(void) : Animal("Cat"), _brain(new Brain()){
	std::cout << "Cat Animal constructor called" << std::endl;
	return ;
}

Cat::Cat(Cat const &src){
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

Cat& Cat::operator=( const Cat &src){
	std::cout << "Cat copy assignment called" << std::endl;
	this->_type = src._type;
	return (*this);
}

Cat::~Cat(void){
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
	return ;
}