/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:20:47 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 13:11:57 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Scavtrap.hpp>

//				CONSTRUCTORS
Scavtrap::Scavtrap(void) : Claptrap(){
	this->setAttack(Scavtrap::defaultattack_dmg);
	this->setEnergy(Scavtrap::defaultenergy);
	this->setHitpoints(Scavtrap::defaulthitpoints);
	std::cout << "Scavtrap default constructor called" << std::endl;
	return ;
}

Scavtrap::Scavtrap(std::string name) : Claptrap(){
	this->setAttack(Scavtrap::defaultattack_dmg);
	this->setEnergy(Scavtrap::defaultenergy);
	this->setHitpoints(Scavtrap::defaulthitpoints);
	std::cout << "Scavtrap name constructor called" << std::endl;
	return ;
}

Scavtrap::~Scavtrap(void){
	std::cout << "Scavtrap destructor called" << std::endl;
	return ;
}


Scavtrap::Scavtrap(const Scavtrap &src) {
	std::cout << "Scavtrap Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Scavtrap& Scavtrap::operator=(const Scavtrap &src){
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
void Scavtrap::attack(const std::string &target)
{
	if (this->getAttack() > 0 && this->getHitpoints() > 0){
	std::cout << "Scavtrap " << this->getName() << " attacks " 
			  << target << ", causing " << this->getAttack() 
			  << " points of damage!" << std::endl;
	this->setEnergy(this->getEnergy() - 1);
	}
}

void Scavtrap::guardGate(void) const
{
	std::cout << "None shall pass this gate" << std::endl;
}