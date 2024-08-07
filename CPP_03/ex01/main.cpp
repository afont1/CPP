/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <afont@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:58:58 by afont             #+#    #+#             */
/*   Updated: 2024/04/22 10:55:15 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap st1("oui");
	
	st1.takeDamage(9);
	st1.takeDamage(1);
	st1.attack("non");
	st1.beRepaired(2);
	st1.attack("non");
}