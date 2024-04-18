/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:12:46 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 13:12:29 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <Claptrap.hpp>

class	Scavtrap : public Claptrap{
	public:
		static unsigned int const	defaulthitpoints = 100;
		static unsigned int const	defaultenergy = 50;
		static unsigned int const	defaultattack_dmg = 20;
		
		Scavtrap(void);
		Scavtrap(Scavtrap const &src);
		~Scavtrap(void);
		Scavtrap(std::string name);
		Scavtrap &operator=( const Scavtrap &src);
		
		void attack(const std::string& target);
		void guardGate(void) const; 
	
	private:
		
	
};

#endif