/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:41:23 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/11 17:49:38 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class	Zombie {
	private:
		std::string	_name;

	public:
		Zombie(void);
		~Zombie(void);
		std::string const	_getName(void) const;
		void				setName(std::string str);
		Zombie(std::string name);
		void				announce(void);
};

Zombie* 	newZombie( std::string name );
void 		randomChump( std::string name );
Zombie*		zombieHorde( int N, std::string name);

#endif