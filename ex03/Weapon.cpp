/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:37:55 by eviscont          #+#    #+#             */
/*   Updated: 2024/10/15 21:08:08 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Weapon " << this->_type << " created";
	std::cout << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon " << this->_type << " destroyed";
	std::cout << std::endl;
}

const std::string	&Weapon::getType() const
{
	return this->_type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
