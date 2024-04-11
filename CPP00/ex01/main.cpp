/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:59:03 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/11 16:20:26 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "./Include/Phonebook.class.hpp"

std::string	getInput(PhoneBook *book) {
	std::string	userInput;

	if (!std::getline(std::cin, userInput) || std::cin.eof()) {
		std::cout << "EXIT" << std::endl;
		return ("EXIT");
	}
	userInput = book->trimBlank(userInput);
	for (std::string::iterator it = userInput.begin(); it != userInput.end(); it++)
			*it = std::toupper(*it);
	return (userInput);
}

int	main(void) {
	PhoneBook	book;
	std::string	userInput;

	std::cout << std::endl << "+---------------- PHONEBOOK ----------------+" << std::endl;
	while (true) {
		std::cout 	<< std::endl
					<< "+---------------- Main Menu ----------------+" << std::endl
					<< std::endl
					<< "What would you like to do?" << std::endl 
					<< "Please enter one of the following:" << std::endl
					<< "\tADD\t: add a contact" << std::endl
					<< "\tSEARCH\t: search contact list" << std::endl
					<< "\tEXIT\t: exit the PhoneBook" << std::endl << "> ";
		userInput = getInput(&book);
		if (userInput == "EXIT")
			break ;
		else if (userInput == "ADD") {
			if (!book.addContact())
				break ;
		}			
		else if (userInput == "SEARCH") {
			if (!book.searchContact())
				break ;
		}
		else {
			std::cout	<< "Please enter one of the following:" << std::endl
						<< "\tADD\t: add a contact" << std::endl
						<< "\tSEARCH\t: search contact list" << std::endl
						<< "\tEXIT\t: exit the PhoneBook" << std::endl;
		}
	}
	std::cout << "Exit" << std::endl;
	return (0);
}