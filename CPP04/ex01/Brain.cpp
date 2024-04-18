/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:39:14 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/18 17:53:30 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain(void) {
	std::cout << "Brain constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain &src){
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
	return ;
}

Brain& Brain::operator=( const Brain &src){
	std::cout << "Brain copy assignment called" << std::endl;
	for (int i = 0; i < 100; i++){
		this->_ideas[i] = src._ideas[i];	
	}	
	return (*this);
}

Brain::~Brain(void){
	std::cout << "Brain destructor called" << std::endl;
	return ;
}