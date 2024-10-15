/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:15:51 by eviscont          #+#    #+#             */
/*   Updated: 2024/10/15 18:11:20 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie	*zombieHp;
	Zombie	zombieSt("Felipe");

	zombieSt.announce();
	zombieHp = newZombie("Jose");
	zombieHp->announce();
	randomChump("Jesus");
	delete zombieHp;
	return (0);
}