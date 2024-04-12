/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:21:10 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/12 13:00:37 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>
#include <iostream>

class	HumanB {
	private:
		std::string	_name;
		Weapon		*_weapon;

	public:
		HumanB(std::string name);	
		HumanB(std::string name, Weapon &weapon);
		~HumanB(void);
		void	setWeapon(Weapon& weapon);
		void	attack(void);
};