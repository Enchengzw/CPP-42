/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:37:27 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 17:46:53 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <string>
# include <iostream>

class	Brain{
	public:
		Brain(void);
		Brain(std::string type);
		Brain(Brain const &src);
		~Brain(void);
		Brain &operator=( const Brain &src);

	protected:
		std::string _ideas[100];
};

#endif