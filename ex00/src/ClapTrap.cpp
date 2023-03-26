/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:19:33 by mochan            #+#    #+#             */
/*   Updated: 2023/03/26 20:26:08 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

//======== CONSTRUCTORS =========================================================================

ClapTrap::ClapTrap()
{
	std::cout << BLU << "Default constructor called" << D << "\n";
	_name = "unknown";
	_hitPoints	= 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string setName)
{
	std::cout << BLU << "Constructor with name parameter called" << D << "\n";
	_name = setName;
	_hitPoints	= 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	std::cout << BLU << "Copy constructor called" << D << "\n";
	*this = src;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& src)
{
	std::cout << BLU << "Copy assignment operator called" << D << "\n";
	this->_name = src._name;
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();
	return (*this);
}

//======== DESTRUCTOR ===========================================================================
ClapTrap::~ClapTrap()
{
	std::cout << CY << "Destructor called" << D << "\n";
}


//==== GETTERS / SETTERS ========================================================================
std::string	ClapTrap::getName( void ) const
{
	return (this->_name);
}

void	ClapTrap::setName( std::string setName )
{
	_name = setName;
}

int	ClapTrap::getHitPoints( void ) const
{
	return (this->_hitPoints);
}

void	ClapTrap::setHitPoints( int setHitPoints )
{
	_hitPoints = setHitPoints;
}

int	ClapTrap::getEnergyPoints( void ) const
{
	return (this->_energyPoints);
}

void	ClapTrap::setEnergyPoints( int setEnergyPoints )
{
	_energyPoints = setEnergyPoints;
}

int	ClapTrap::getAttackDamage( void ) const
{
	return (this->_attackDamage);
}

void	ClapTrap::setAttackDamage( int setAttackDamage )
{
	_attackDamage = setAttackDamage;
}


//======== MEMBER FUNCTIONS =====================================================================
void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints == 0)
		std::cout << RED << this->_name << " cannot attack due to 0 hit points." << D << "\n";
	else if (this->_energyPoints == 0)
		std::cout << RED << this->_name << " cannot attack due to 0 energy points." << D << "\n";
	else
	{
		this->_energyPoints--;	
		std::cout << YELL << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage! Energy Points is: " << this->_energyPoints << D << "\n";
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
		std::cout << RED << this->_name << " is dead." << D << "\n";
	else if (this->_hitPoints - (int)amount > 0)
	{
		this->_hitPoints = this->_hitPoints - amount;
		std::cout << RED << this->_name << " takes damage and lose " << amount << " hit points! Hit points level is: " << this->_hitPoints << D << "\n";
	}
	else
	{
		this->_hitPoints = 0;
		std::cout << RED << this->_name << " lost all their hit points! New hit points level is: " << this->_hitPoints << D << "\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0 || this->_energyPoints == 0 )
		std::cout << RED << this->_name << " cannot repair due to 0 hit points or/and 0 energy points" << D << "\n";
	else
	{
		this->_energyPoints--;
		this->_hitPoints = this->_hitPoints + amount;
		std::cout << GREEN << this->_name << " repairs himself for " << amount << " hitpoints! New hit points level is: " << this->_hitPoints << ". Energy Points is: " << this->_energyPoints << D << "\n";
	}
}