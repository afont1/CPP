/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <afont@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:06:41 by afont             #+#    #+#             */
/*   Updated: 2024/11/22 10:07:02 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	print(int const &i)
{
	std::cout << i << std::endl;
}

int		main(void)
{
	int		tab[] = {0, 1, 2, 3, 4};
	iter(tab, 5, print);
	return (0);
}