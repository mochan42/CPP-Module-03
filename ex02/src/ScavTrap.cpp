/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 20:14:50 by mochan            #+#    #+#             */
/*   Updated: 2023/03/26 23:27:17 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

//======== CONSTRUCTORS =========================================================================

ScavTrap::ScavTrap()
{
	std::cout << BLU << "Default constructor called from ScavTrap" << D << "\n";
	_name = "unknown";
	_hitPoints	= 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string setName)
{
	std::cout << BLU << "Constructor with name parameter called from ScavTrap" << D << "\n";
	_name = setName;
	_hitPoints	= 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ClapTrap& src)
{
	std::cout << BLU << "Copy constructor called from ScavTrap" << D << "\n";
	*this = src;
}

//======== DESTRUCTOR ===========================================================================
ScavTrap::~ScavTrap()
{
	std::cout << CY << "Destructor called from ScavTrap" << D << "\n";
}


//======== MEMBER FUNCTIONS =====================================================================
void	ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints == 0)
		std::cout << RED << this->_name << " cannot attack due to 0 hit points." << D << "\n";
	else if (this->_energyPoints == 0)
		std::cout << RED << this->_name << " cannot attack due to 0 energy points." << D << "\n";
	else
	{
		this->_energyPoints--;	
		std::cout << YELL << this->_name << " attacks " << target << " from ScavTrap, causing " << this->_attackDamage << " points of damage! Energy Points is: " << this->_energyPoints << D << "\n";
	}
}

void	ScavTrap::guardGate()
{
	std::cout << PU << "ScavTrap is now in Gate keeper mode" << D << "\n";
}