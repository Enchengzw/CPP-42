/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:30:49 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/17 12:09:56 by ezhou            ###   ########.fr       */
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
		int	getRawBits( void ) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int	toInt( void ) const;
		Fixed &operator=( const Fixed &src);
		
		bool operator>(Fixed const &number) const;
		bool operator<(Fixed const &number) const;
		bool operator>=(Fixed const &number) const;
		bool operator<=(Fixed const &number) const;
		bool operator==(Fixed const &number) const;
		bool operator!=(Fixed const &number) const;

		Fixed operator+(Fixed const &number) const;
		Fixed operator-(Fixed const &number) const;
		Fixed operator*(Fixed const &number) const;
		Fixed operator/(Fixed const &number) const;
	
		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);

		static const Fixed& min(Fixed &n1, Fixed &n2);
		static const Fixed& min(const Fixed &n1, const Fixed &n2);
		static const Fixed& max(Fixed &n1, Fixed& n2);
		static const Fixed& max(const Fixed &n1, const Fixed &n2);
		
	private:
		int					_rawbits;
		static const int	_fractional_bits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& Fixed);

#endif