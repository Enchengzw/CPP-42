/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:59:05 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/12 11:12:30 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout	<< "Addresses\nstr : " << &str << std::endl
				<< "stringPTR : " << stringPTR << std::endl
				<< "stringREF : " << stringREF << std::endl
				<< "Values\nstr : " << str << std::endl
				<< "stringPTR : " << *stringPTR << std::endl
				<< "stringREF : " << stringREF << std::endl;
	return (0);			
}				