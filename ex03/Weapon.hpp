/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:38:12 by eviscont          #+#    #+#             */
/*   Updated: 2024/10/15 20:38:22 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string.h>
# include <iostream>

class Weapon
{
	private:
			std::string	_type;
	public:
			Weapon(std::string type);
			~Weapon();
			const std::string	&getType() const;
			void	setType(std::string type);
};

#endif