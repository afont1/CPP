/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <afont@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:29:16 by afont             #+#    #+#             */
/*   Updated: 2024/12/11 09:29:25 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->_type = "WrongAnimal";
	std::cout << "<" << this->_type << "> wrong animal created" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "<" << this->_type << "> wrong animal destructed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	this->_type = src._type;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "*wrong animal noise*" << std::endl;
}