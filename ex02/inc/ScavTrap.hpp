/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 20:15:33 by mochan            #+#    #+#             */
/*   Updated: 2023/03/27 09:00:54 by moninechan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <cstring>

class ScavTrap : public ClapTrap
{
	public:
		// CONSTRUCTORS - DESTRUCTOR
		ScavTrap(void); // Default derived constructor
		ScavTrap(std::string name); // Derived Constructor with name parameter
		ScavTrap(ClapTrap const & src); // Drived Default copy constructor
		~ScavTrap(void); // Drived Destructor
		void	attack(const std::string& target);
		void	guardGate();
};

#endif