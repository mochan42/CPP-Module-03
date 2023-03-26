/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:19:42 by mochan            #+#    #+#             */
/*   Updated: 2023/03/26 23:01:20 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"

int random_integer(int max_value) {
	// Seed the random number generator with the current time
	std::srand(std::time(nullptr));

	// Generate a random positive integer between 0 and max_value - 1
	return std::rand() % max_value;
}

int main()
{
	ClapTrap spiderman("Spiderman");
	ScavTrap robin("Robin");

	std::string	enemies[5] = {"Dr Octopus","Sandman", "Green Goblin", "Venom", "Electro"};
	int			damage[4] = {0,1,2,3};
	int			repair[4] = {0,1,2,3};
	int			i;
	while ((spiderman.getEnergyPoints() > 0 && spiderman.getHitPoints() > 0) || (robin.getEnergyPoints() > 0 && robin.getHitPoints() > 0))
	{
		i = random_integer(3);
		usleep(211000);
		if (i == 0)
		{
			spiderman.attack(enemies[random_integer(5)]);
			robin.attack(enemies[random_integer(5)]);
			usleep(98000);
		}
		else if (i == 1)
		{
			spiderman.takeDamage(damage[random_integer(4)]);
			robin.takeDamage(damage[random_integer(4)]);
			usleep(143000);
		}
		else
		{
			spiderman.beRepaired(repair[random_integer(4)]);
			robin.beRepaired(repair[random_integer(4)]);
			usleep(177000);
		}
	}
	robin.guardGate();
	if (spiderman.getEnergyPoints() == 0 && spiderman.getHitPoints() > 0)
		std::cout << YELL << "----- " << spiderman.getName() << " needs to rest -----" << D << "\n";
	if (spiderman.getHitPoints() == 0)
		std::cout << RED << "----- " << spiderman.getName() << " died -----" << D << "\n";
	if (robin.getEnergyPoints() == 0 && robin.getHitPoints() > 0)
		std::cout << YELL << "----- " << robin.getName() << " needs to rest -----" << D << "\n";
	if (robin.getHitPoints() == 0)
		std::cout << RED << "----- " << robin.getName() << " died -----" << D << "\n";
	return 0;
}