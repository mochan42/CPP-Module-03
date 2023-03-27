/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 23:24:13 by mochan            #+#    #+#             */
/*   Updated: 2023/03/27 08:49:01 by moninechan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"


//======== CONSTRUCTORS =========================================================================

FragTrap::FragTrap()
{
	std::cout << BLU << "Default constructor called from FragTrap" << D << "\n";
	this->_hitPoints	= 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string setName)
{
	std::cout << BLU << "Constructor with name parameter called from FragTrap" << D << "\n";
	this->_name = setName;
	this->_hitPoints	= 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
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