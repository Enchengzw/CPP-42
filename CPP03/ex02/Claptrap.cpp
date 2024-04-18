/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:26:16 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 13:01:14 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Claptrap.hpp>

// 			CONSTRUCTORS AND DESTRUCTORS
Claptrap::Claptrap(void) : 
_name("NoName"),
_hitpoints(Claptrap::defaulthitpoints),
_attack_dmg(Claptrap::defaultattack_dmg),
_energy(Claptrap::defaultenergy){
	std::cout << "Claptrap default constructor called" << std::endl;
	return ;
}

Claptrap::Claptrap(std::string name) : 
_name(name),
_hitpoints(Claptrap::defaulthitpoints),
_attack_dmg(Claptrap::defaultattack_dmg),
_energy(Claptrap::defaultenergy){
	std::cout << "Claptrap name constructor called" << std::endl;
	return ;
}

Claptrap::Claptrap(const Claptrap &src) {
	std::cout << "Claptrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

Claptrap& Claptrap::operator=(const Claptrap &src){
	std::cout << "Claptrap copy assignment operator called" << std::endl;
	if (this != &src){
		this->_name = src.getName();
		this->_energy = src.getEnergy();
		this->_hitpoints = src.getHitpoints();
		this->_attack_dmg = src.getAttack();
	}
	return *this;
}

Claptrap::~Claptrap(void){
	std::cout << "Claptrap destructor called" << std::endl;
	return ;
}

// 			GETTERS AND SETTERS

std::string Claptrap::getName() const
{
	return (this->_name);
}

unsigned int Claptrap::getHitpoints() const
{
	return (this->_hitpoints);
}

unsigned int Claptrap::getEnergy() const
{
	return (this->_energy);
}

unsigned int Claptrap::getAttack() const
{
	return (this->_attack_dmg);
}

bool	Claptrap::setName(std::string name)
{
	if (name.empty())
		return (false);
	this->_name = name;
	return (true);
}

bool	Claptrap::setEnergy(unsigned int energy)
{
	this->_energy = energy;
	return (true);
}

bool	Claptrap::setHitpoints(unsigned int hitpoints)
{
	this->_hitpoints = hitpoints;
	return (true);
}

bool	Claptrap::setAttack(unsigned int attack)
{
	this->_attack_dmg = attack;
	return (true);
}

//			PUBLIC FUNCTIONS

void Claptrap::attack(const std::string &target)
{
	if (this->_energy > 0 && this->_hitpoints > 0){
	std::cout << "Claptrap " << this->getName() << " attacks " 
			  << target << ", causing " << this->getAttack() 
			  << " points of damage!" << std::endl;
	this->_energy--;
	}
			
}

void Claptrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0){
	std::cout <<  "beRepaired called" << std::endl;
	this->_hitpoints += amount;
	this->_energy--;
	}
}

void Claptrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints == 0){
	std::cout << "Stop, it's already dead!" << std::endl;
	}
	std::cout << "takeDamage called" << std::endl;
	if (amount > this->_hitpoints)
		this->_hitpoints = 0;
	else
		this->_hitpoints -= amount;
}