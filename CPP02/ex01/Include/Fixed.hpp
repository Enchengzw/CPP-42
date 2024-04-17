/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:30:49 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/17 11:20:41 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <string>
# include <iostream>
# include <cmath>

class	Fixed {
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		Fixed(const int integer);
		Fixed(const float number);
		~Fixed(void);
		Fixed &operator=( const Fixed &src);
		int	getRawBits( void ) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int	toInt( void ) const;
	
	private:
		int					_rawbits;
		static const int	_fractional_bits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& Fixed);

#endif