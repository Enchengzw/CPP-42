/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:47:25 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/17 12:32:08 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

//			CONSTRUCTORS AND DESTRUCTORS

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

//				SETTERS AND GETTERS

int Fixed::getRawBits( void ) const{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->_rawbits;
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits function called" << std::endl;
	this->_rawbits = raw;
	return ;
}

//			PUBLIC FUNCTIONS
int Fixed::toInt (void) const{
	return (this->getRawBits() >> _fractional_bits);
}

float Fixed::toFloat (void) const{
	return ((float)this->getRawBits() / (1 << _fractional_bits));
}

Fixed& Fixed::operator=(const Fixed &src){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawbits = src.getRawBits();
	return *this;
}

//			OPERATORS

std::ostream& operator<<(std::ostream& out, const Fixed& Fixed)
{
	out << Fixed.toFloat();
	return out;
}

bool Fixed::operator>(Fixed const &number) const{
	return (this->getRawBits() > number.getRawBits());
}

bool Fixed::operator<(Fixed const &number) const{
	return (this->getRawBits() < number.getRawBits());
}
bool Fixed::operator>=(Fixed const &number) const{
	return (this->getRawBits() >= number.getRawBits());
}
bool Fixed::operator<=(Fixed const &number) const{
	return (this->getRawBits() <= number.getRawBits());
}
bool Fixed::operator==(Fixed const &number) const{
	return (this->getRawBits() == number.getRawBits());
}
bool Fixed::operator!=(Fixed const &number) const{
	return (this->getRawBits() != number.getRawBits());
}

Fixed Fixed::operator+(Fixed const &number) const{
	return (this->toFloat() + number.toFloat());
}

Fixed Fixed::operator-(Fixed const &number) const{
	return (this->toFloat() - number.toFloat());
}

Fixed Fixed::operator*(Fixed const &number) const{
	return (this->toFloat() * number.toFloat());
}

Fixed Fixed::operator/(Fixed const &number) const{
	return (this->toFloat() / number.toFloat());
}

Fixed Fixed::operator++( int )
{
	Fixed	tmp( *this );

	++(*this);
	return ( tmp );
}

Fixed& Fixed::operator++( void )
{
	this->_rawbits +=1;
	return (*this);
}

Fixed& Fixed::operator--( void )
{
	this->_rawbits -=1;
	return (*this);
}

Fixed Fixed::operator--( int )
{
	Fixed	tmp( *this );

	--(*this);
	return ( tmp );
}

const Fixed& Fixed::min(Fixed &n1, Fixed &n2)
{
	if (n1.toFloat() < n2.toFloat())
		return (n1);
	else
		return (n2);
}

const Fixed& Fixed::min(const Fixed &n1, const Fixed &n2)
{
	if (n1.toFloat() < n2.toFloat())
		return (n1);
	else
		return (n2);
}

const Fixed& Fixed::max(Fixed &n1, Fixed &n2)
{
	if (n1.toFloat() > n2.toFloat())
		return (n1);
	else
		return (n2);
}

const Fixed& Fixed::max(const Fixed &n1, const Fixed &n2)
{
	if (n1.toFloat() > n2.toFloat())
		return (n1);
	else
		return (n2);
}