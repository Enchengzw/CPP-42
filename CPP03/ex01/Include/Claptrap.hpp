/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:46:27 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 12:31:42 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>
# include <iostream>

class	Claptrap {
	public:
		static unsigned int const	defaulthitpoints = 10;
		static unsigned int const	defaultenergy = 10;
		static unsigned int const	defaultattack_dmg = 0;
		
		Claptrap(void);
		~Claptrap(void);
		Claptrap(Claptrap const &src);
		Claptrap(std::string name);
		Claptrap &operator=( const Claptrap &src);
		
		std::string 	getName(void) const;
		unsigned int	getHitpoints(void) const;
		unsigned int 	getEnergy(void) const;
		unsigned int	getAttack(void) const;

		bool			setName(std::string name);
		bool			setHitpoints(unsigned int hitpoints);
		bool			setEnergy(unsigned int energy);
		bool			setAttack(unsigned int attack);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	
	private:
		std::string 	_name;
		unsigned int	_hitpoints;
		unsigned int	_energy;
		unsigned int	_attack_dmg;
};

#endif