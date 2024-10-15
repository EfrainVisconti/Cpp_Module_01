/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:16:15 by eviscont          #+#    #+#             */
/*   Updated: 2024/10/15 17:36:00 by eviscont         ###   ########.fr       */
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
			Zombie(std::string name);
			~Zombie();
			void	announce(void);
};

#endif