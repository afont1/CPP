/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <afont@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:58:58 by afont             #+#    #+#             */
/*   Updated: 2024/04/22 11:26:20 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap ft1("oui");
	FragTrap ft2("non");
	FragTrap ft3("ouais");
	
	ft1.takeDamage(9);
	ft1.takeDamage(1);
	ft1.attack("non");
	ft1.beRepaired(2);
	ft1.attack("non");
	ft1.highFivesGuys();
	ft2.highFivesGuys();
	ft3.highFivesGuys();
}