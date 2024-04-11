/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:33:27 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/11 17:37:01 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class	Contact {
	private:
		std::string	_firstname;
		std::string	_lastname;
		std::string	_number;

		bool		_containsOnlyAlpha(std::string const input);
		bool		_containsOnlyDigits(std::string const input);
	
	public:
		Contact(void);
		~Contact(void);

		bool				isEmpty(void) const;
		std::string const	getFirstname(void) const;
		std::string const	getLastname(void) const;
		std::string const	getNumber(void) const;
		bool				setFirstname(std::string str);
		bool				setLastname(std::string str);
		bool				setNumber(std::string const str);
		bool				displayContactInfo(void) const;
};

#endif