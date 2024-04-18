/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:08:21 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 16:09:27 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat(void) : WrongAnimal("WrongCat"){
	std::cout << "WrongCat Animal constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const &src){
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
	return ;
}

WrongCat& WrongCat::operator=( const WrongCat &src){
	std::cout << "WrongCat copy assignment called" << std::endl;
	this->_type = src._type;
	return (*this);
}

WrongCat::~WrongCat(void){
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}