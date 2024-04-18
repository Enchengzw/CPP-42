/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:41:41 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 17:46:28 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include <WrongAnimal.hpp>

class	WrongCat : public WrongAnimal{
	public:
		WrongCat(void);
		WrongCat(const WrongCat &src);
		~WrongCat(void);
		WrongCat &operator=( const WrongCat &src);
};

#endif