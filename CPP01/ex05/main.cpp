/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:52:40 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/16 15:54:08 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>
#include <iostream>

int	main( int ac, char **av )
{
	Harl	grumblerHarl;

	if (ac != 2)
	{
		return ( 0 );
	}
	grumblerHarl.complain(av[1]);
	return ( 0 );
}