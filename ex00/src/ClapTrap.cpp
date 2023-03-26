/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:19:33 by mochan            #+#    #+#             */
/*   Updated: 2023/03/26 17:46:41 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

//======== CONSTRUCTORS =========================================================================

ClapTrap::ClapTrap(std::string setName)
{
	std::cout << GREEN << "Default constructor called" << D << "\n";
	_name = setName;
	_hitPoints	= 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	std::cout << YELL << "Copy constructor called" << D << "\n";
	*this = src;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& src)
{
	std::cout << BLU << "Copy assignment operator called" << D << "\n";
	this->setName(src.getName());
	return (*this);
}

//======== DESTRUCTOR ===========================================================================
ClapTrap::~ClapTrap()
{
	std::cout << RED << "Destructor called" << D << "\n";
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