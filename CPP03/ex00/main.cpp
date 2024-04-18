/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:57:07 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 11:09:06 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Claptrap.hpp>
#include <string>

int	main(void) {
	std::string trapName0 = "CT000";
	std::string trapName1 = "CT-42";

	Claptrap	trap0(trapName0);
	Claptrap	trap1(trapName1);

	trap0.beRepaired(0);
	trap1.takeDamage(10);
	trap0.attack(trapName1);
	trap1.takeDamage(5);
	trap1.beRepaired(4);
	trap1.attack(trapName0);
	trap0.takeDamage(5);
	trap0.beRepaired(5000);
	trap1.beRepaired(5000);
	trap1.attack(trapName1);
	trap1.takeDamage(5000);
	trap1.beRepaired(5000);
	trap1.takeDamage(1);
	return (0);
}