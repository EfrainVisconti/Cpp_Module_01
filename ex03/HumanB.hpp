/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:39:29 by eviscont          #+#    #+#             */
/*   Updated: 2024/10/15 20:56:26 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string.h>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
			std::string	_name;
			Weapon	*_weapon;
	public:
			HumanB(std::string name);
			~HumanB();
			void	setWeapon(Weapon &weapon);
			void	attack();
};

#endif