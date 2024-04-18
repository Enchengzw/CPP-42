/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:41:41 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 17:54:11 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <Animal.hpp>
# include <Brain.hpp>

class	Cat : public Animal{
	public:
		Cat(void);
		Cat(const Cat &src);
		~Cat(void);
		Cat &operator=( const Cat &src);
	private:
		Brain *_brain;
};

#endif