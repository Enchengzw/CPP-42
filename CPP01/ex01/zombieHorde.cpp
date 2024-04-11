/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:49:49 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/11 17:56:57 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie* zombieHorde( int N, std::string name)
{
	if (N <= 0)
		return (NULL);
		Zombie *horde = new Zombie[N];
	for	(int i = 0; i < N; i++){
		horde[i].setName( name );
		horde[i].announce();
	}
	return (horde);
}