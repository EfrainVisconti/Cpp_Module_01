/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:16:12 by eviscont          #+#    #+#             */
/*   Updated: 2024/10/15 18:33:59 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string.h>
# include <iostream>

class Zombie
{
	private:
			std::string	_name;
	public:
			Zombie();
			~Zombie();
			void	announce(void);
			void	setName(std::string name);
};

#endif