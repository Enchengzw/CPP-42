/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:33:20 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/11 16:32:08 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Contact.class.hpp>

//Constructor and destructor
Contact::Contact(void) :
	_firstname(""),
	_lastname(""),
	_number(""){
	return ;
}

Contact::~Contact(void) {
	return ;
}

//Getters and Setters
std::string const	Contact::getFirstname(void) const {
	return (this->_firstname);
}

std::string const	Contact::getLastname(void) const {
	return (this->_lastname);
}

std::string const	Contact::getNumber(void) const {
	return (this->_number);
}

bool	Contact::setFirstname(std::string str) {
	if (str.empty()) {
		return (false);
	}
	else if (!_containsOnlyAlpha(str)) {
		std::cout << "Names can only contain letters, spaces and hyphens." << std::endl;
		return (false);
	}
	str[0] = std::toupper(str[0]);
	this->_firstname = str;
	return (true);
}

bool	Contact::setLastname(std::string str) {
	if (str.empty()) {
		return (false);
	}
	else if (!_containsOnlyAlpha(str)) {
		std::cout << "Names can only contain letters, spaces and hyphens." << std::endl;
		return (false);
	}
	std::string::iterator it;
	for (it = str.begin(); it < str.end(); it++) {
		*it = std::toupper(*it);
	}
	this->_lastname = str;
	return (true);
}

bool	Contact::setNumber(std::string const str) {
	if (str.empty()) {
		return (false);
	}
	else if (!_containsOnlyDigits(str)) {
		std::cout << "Phone numbers can only contain digits." << std::endl;
		return (false);
	}
	this->_number = str;
	return (true);
}

//Private functions
bool	Contact::_containsOnlyAlpha(std::string s) {
	std::string::iterator it;
	for (it = s.begin(); it != s.end(); it++) {
		if (!std::isalpha(*it) && *it != ' ' && *it != '-') {
			return (false);
		}
	}
	return (true);
}

bool	Contact::_containsOnlyDigits(std::string s) {
	std::string::iterator it;
	for (it = s.begin(); it != s.end(); it++) {
		if (!std::isdigit(*it) && *it != ' ' && *it != '-') {
			return (false);
		}
	}
	return (true);
}

//Public functions
bool	Contact::isEmpty(void) const {
	if (this->_firstname.empty()
		|| this->_lastname.empty()
		|| this->_number.empty())
		return (true);
	return (false);
}

bool	Contact::displayContactInfo(void) const {
	if (this->isEmpty())
		return (false);
	std::cout	<< "+ First name\t: "	<< this->getFirstname()	<< std::endl
				<< "+ Last name\t: "	<< this->getLastname()	<< std::endl
				<< "+ Phone number\t: "	<< this->getNumber() 	<< std::endl;
	return (true);
}