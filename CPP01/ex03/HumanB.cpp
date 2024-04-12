/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:45:51 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/12 13:08:50 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

HumanB::HumanB(std::string name, Weapon& weapon) : 
_name(name),
_weapon(&weapon) {
	return ;
}

HumanB::HumanB(std::string const name) : 
_name(name) {
	this->_weapon = NULL;
	return ;
}


HumanB::~HumanB(void) {
	return ;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	if (&weapon != nullptr)
		this->_weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (this->_weapon == nullptr)
		std::cout << this->_name << " can't attack without a weapon" << std::endl;
	else
		std::cout << "An attack from : " << this->_name << " with : " << this->_weapon->getType() << std::endl;
}