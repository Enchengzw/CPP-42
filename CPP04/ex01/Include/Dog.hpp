/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:26:37 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 17:54:13 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include <Animal.hpp>
# include <Brain.hpp>

class	Dog : public Animal{
	public:
		Dog(void);
		Dog(Dog const &src);
		~Dog(void);
		Dog &operator=( const Dog &src);
	private:
		Brain *_brain;
};

#endif