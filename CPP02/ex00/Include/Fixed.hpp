/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:30:49 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/17 10:49:25 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <string>
# include <iostream>

class	Fixed {
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed(void);
		Fixed &operator=( const Fixed &src);
		int	getRawBits( void ) const;
		void setRawBits(int const raw);
	
	private:
		int					_rawbits;
		static const int	fractional_bits = 8;
};


#endif