/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:46:51 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 17:46:20 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <string>
# include <iostream>

class	WrongAnimal{
	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const &src);
		~WrongAnimal(void);
		WrongAnimal &operator=( const WrongAnimal &src);

		std::string	getType() const;
		bool		setType(std::string type);
		void		makeSound() const;
	protected:
		std::string _type;
};

#endif