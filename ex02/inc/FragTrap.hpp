/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 23:25:00 by mochan            #+#    #+#             */
/*   Updated: 2023/03/26 23:30:15 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <cstring>

class FragTrap : public ScavTrap
{
	public:
		// CONSTRUCTORS - DESTRUCTOR
		FragTrap(void); // Default derived constructor
		FragTrap(std::string name); // Derived Constructor with name parameter
		FragTrap(ClapTrap const & src); // Drived Default copy constructor
		~FragTrap(void); // Drived Destructor
		void	highFivesGuys(void);

	private:

};

#endif