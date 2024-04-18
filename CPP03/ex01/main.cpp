/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:57:07 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 13:27:17 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Scavtrap.hpp>
#include <string>

int	main(void) {
	Scavtrap	trap0;
	Scavtrap	trap1("Sesame");

	trap1.attack("HIM");
	std::cout << trap1.getName() << std::endl;
	return (0);
}