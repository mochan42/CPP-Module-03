/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 23:24:13 by mochan            #+#    #+#             */
/*   Updated: 2023/03/26 23:38:56 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"


//======== CONSTRUCTORS =========================================================================

FragTrap::FragTrap()
{
	std::cout << BLU << "Default constructor called from FragTrap" << D << "\n";
	_name = "unknown";
	_hitPoints	= 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

FragTrap::FragTrap(std::string setName)
{
	std::cout << BLU << "Constructor with name parameter called from FragTrap" << D << "\n";
	_name = setName;
	_hitPoints	= 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

FragTrap::FragTrap(const ClapTrap& src)
{
	std::cout << BLU << "Copy constructor called from FragTrap" << D << "\n";
	*this = src;
}

//======== DESTRUCTOR ===========================================================================
FragTrap::~FragTrap()
{
	std::cout << CY << "Destructor called from FragTrap" << D << "\n";
}


//======== MEMBER FUNCTIONS =====================================================================
void	FragTrap::highFivesGuys(void)
{
	std::cout << BLA << this->_name << " says : High Gives Guys!" << D << "\n";
}