/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:46:02 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/11 17:55:56 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Zombie.hpp>

Zombie::Zombie(void) :
	_name(""){
		return ;
}

Zombie::Zombie(std::string name) : _name(name) {
	this->announce();
	return ;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie " << this->_getName() << " has died" << std::endl;
	return ;
}

std::string const Zombie::_getName(void) const
{
	return (this->_name);
}

void Zombie::setName( std::string name)
{
	this->_name = name;
}

void Zombie::announce(void)
{
	std::cout << this->_getName() <<" : BraiiiiiiinnnzzzZ..." << std::endl;
}


