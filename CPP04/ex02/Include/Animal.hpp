/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:46:51 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 18:37:01 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

class	Animal{
	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const &src);
		virtual ~Animal(void);
		Animal &operator=( const Animal &src);

		std::string		getType() const;
		bool			setType(std::string type);
		virtual void	makeSound() const = 0;
	protected:
		std::string _type;
};

#endif