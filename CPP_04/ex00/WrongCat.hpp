/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <afont@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:31:56 by afont             #+#    #+#             */
/*   Updated: 2024/12/11 13:15:26 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	private:
		
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(WrongCat const &src);
		WrongCat	&operator=(WrongCat const &rhs);
		void	makeSound(void) const;
};

#endif