/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:45:51 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/12 13:07:09 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

HumanA::HumanA(std::string const name, Weapon &weapon) : 
_name(name),
_weapon(weapon) {
	return ;
}

HumanA::~HumanA(void) {
	return ;
}

void	HumanA::attack(void)
{
	std::cout << "An attack from : " << this->_name << " with : " << this->_weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon& weapon)
{
	if (&weapon != nullptr)
		this->_weapon = weapon;
}