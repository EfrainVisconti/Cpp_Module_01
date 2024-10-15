/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:07:43 by eviscont          #+#    #+#             */
/*   Updated: 2024/10/15 19:29:15 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string stringContent;
	std::string	*stringPTR;
	std::string	&stringREF = stringContent;

	stringContent = "HI THIS IS BRAIN";
	stringPTR = &stringContent;

	std::cout << "First..." << std::endl;
	std::cout << "The memory address of the string variable: ";
	std::cout << &stringContent << std::endl;
	std::cout << "The memory address held by stringPTR: ";
	std::cout << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: ";
	std::cout << &stringREF << std::endl;

	std::cout << "Then..." << std::endl;
	std::cout << "The value of the string variable: ";
	std::cout << stringContent << std::endl;
	std::cout << "The value pointed to by stringPTR. ";
	std::cout << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: ";
	std::cout << stringREF << std::endl;
}