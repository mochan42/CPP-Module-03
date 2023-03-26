/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:19:48 by mochan            #+#    #+#             */
/*   Updated: 2023/03/26 17:46:07 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <cstring>

class	ClapTrap
{
	public:
		ClapTrap(std::string setName); // Default constructor
		ClapTrap(const ClapTrap& other); // Default copy constructor
		~ClapTrap(); // Destructor
		ClapTrap&	operator=(const ClapTrap& src); // Copy assignment operator called
		std::string		getName( void ) const;
		void			setName( std::string setName );
		

	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;	
};

#endif