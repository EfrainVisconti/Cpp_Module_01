/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:16:05 by eviscont          #+#    #+#             */
/*   Updated: 2024/10/15 17:45:36 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Zombie " << this->_name << " created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << " destroyed" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}