/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:41:41 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 17:49:43 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <Animal.hpp>

class	Cat : public Animal{
	public:
		Cat(void);
		Cat(const Cat &src);
		~Cat(void);
		Cat &operator=( const Cat &src);
};

#endif