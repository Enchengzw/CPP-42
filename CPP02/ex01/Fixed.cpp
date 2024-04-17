/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:47:25 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/17 11:22:26 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

Fixed::Fixed(void) : _rawbits(0){
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed( const int integer ) : _rawbits(integer << _fractional_bits){
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const float number ) : _rawbits( roundf(number * (1 << _fractional_bits)))
{
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed& Fixed::operator=(const Fixed &src){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawbits = src.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->_rawbits;
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits function called" << std::endl;
	this->_rawbits = raw;
	return ;
}

int Fixed::toInt (void) const{
	return (this->getRawBits() >> _fractional_bits);
}

float Fixed::toFloat (void) const{
	return ((float)this->getRawBits() / (1 << _fractional_bits));
}

std::ostream& operator<<(std::ostream& out, const Fixed& Fixed)
{
	out << Fixed.toFloat();
	return out;
}
