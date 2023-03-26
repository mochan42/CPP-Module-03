/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:19:48 by mochan            #+#    #+#             */
/*   Updated: 2023/03/26 22:25:29 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <cstring>
#include <cstdlib> // for rand() and srand() from the C standard library
#include <ctime> // for time() from the C standard library
#include <unistd.h> // for usleep() - POSIX standard.

class	ClapTrap
{
	public:
		// CONSTRUCTORS - DESTRUCTOR
		ClapTrap(); // Default constructor
		ClapTrap(std::string setName); // Constructor with name parameter
		ClapTrap(const ClapTrap& other); // Default copy constructor
		~ClapTrap(); // Destructor
		
		// OVERLOAD OPERATOR
		ClapTrap&	operator=(const ClapTrap& src); // Copy assignment operator called
		
		// GETTERS - SETTERS
		std::string		getName( void ) const;
		void			setName( std::string setName );
		int				getHitPoints( void ) const;
		void			setHitPoints( int setHitPoints );
		int				getEnergyPoints( void ) const;
		void			setEnergyPoints( int setEnergyPoints );
		int				getAttackDamage( void ) const;
		void			setAttackDamage( int setAttackDamage );
		
		// MEMBER FUNCTIONS
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;	
};

#endif