/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:10:10 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/12 12:20:37 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class	Weapon {
	private:
		std::string	_type;

	public:
		Weapon(std::string const type);
		~Weapon(void);
		std::string const	&getType() const;
		void	setType(std::string type);
};

#endif