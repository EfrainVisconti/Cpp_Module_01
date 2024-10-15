/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:38:43 by eviscont          #+#    #+#             */
/*   Updated: 2024/10/15 20:37:32 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string.h>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private:
			std::string	_name;
			Weapon	&_weapon;
	public:
			HumanA(std::string name, Weapon &weapon);
			~HumanA();
			void	attack();
};

#endif