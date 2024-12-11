/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <afont@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:36:12 by afont             #+#    #+#             */
/*   Updated: 2024/12/11 09:54:10 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "<" << this->_type << "> cat created" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "<" << this->_type << "> cat destructed" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	this->_type = src._type;
	this->_brain = new Brain(*src._brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}