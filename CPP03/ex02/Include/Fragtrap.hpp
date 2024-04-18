/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:19:44 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 13:22:50 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <Claptrap.hpp>

class	Fragtrap : public Claptrap{
	public:
		static unsigned int const	defaulthitpoints = 100;
		static unsigned int const	defaultenergy = 100;
		static unsigned int const	defaultattack_dmg = 30;
		
		Fragtrap(void);
		Fragtrap(Fragtrap const &src);
		~Fragtrap(void);
		Fragtrap(std::string name);
		Fragtrap &operator=( const Fragtrap &src);
		
		void highFivesGuys(void) const;
	
	private:
		
	
};

#endif