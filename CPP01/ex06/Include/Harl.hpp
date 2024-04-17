/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:41:23 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/12 17:07:54 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <string>
# include <iostream>

class	Harl {
	private:
		void	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void );

	public:
		Harl(void);
		~Harl(void);
		void	complain( std::string level );
};

#endif