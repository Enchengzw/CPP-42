/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:23:45 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 13:28:43 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fragtrap.hpp>

//				CONSTRUCTORS
Fragtrap::Fragtrap(void) : Claptrap(){
	this->setAttack(Fragtrap::defaultattack_dmg);
	this->setEnergy(Fragtrap::defaultenergy);
	this->setHitpoints(Fragtrap::defaulthitpoints);
	std::cout << "Fragtrap default constructor called" << std::endl;
	return ;
}

Fragtrap::Fragtrap(std::string name) : Claptrap(name){
	this->setAttack(Fragtrap::defaultattack_dmg);
	this->setEnergy(Fragtrap::defaultenergy);
	this->setHitpoints(Fragtrap::defaulthitpoints);
	std::cout << "Fragtrap name constructor called" << std::endl;
	return ;
}

Fragtrap::~Fragtrap(void){
	std::cout << "Fragtrap destructor called" << std::endl;
	return ;
}


Fragtrap::Fragtrap(const Fragtrap &src) {
	std::cout << "Scavtrap Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fragtrap& Fragtrap::operator=(const Fragtrap &src){
	std::cout << "Scavtrap Copy assignment operator called" << std::endl;
	if (this != &src){
		this->setAttack(src.getAttack());
		this->setEnergy(src.getEnergy());
		this->setHitpoints(src.getHitpoints());
		this->setName(src.getName());
	}
	return *this;
}  

//				PUBLIC FUNCTIONS

void Fragtrap::highFivesGuys(void) const
{
	std::cout << "Come on! High Five!" << std::endl;
}