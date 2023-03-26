/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:19:42 by mochan            #+#    #+#             */
/*   Updated: 2023/03/26 19:49:03 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"


int random_integer(int max_value) {
	// Seed the random number generator with the current time
	std::srand(std::time(nullptr));

	// Generate a random positive integer between 1 and max_value
	return std::rand() % max_value;
}


int main()
{
	ClapTrap spiderman("Spiderman");

	std::string	enemies[5] = {"Dr Octopus","Sandman", "Green Goblin", "Venom", "Electro"};
	int			damage[4] = {0,1,2,3};
	int			repair[4] = {0,1,2,3};
	int	i;
	i = random_integer(3);
	while (spiderman.getEnergyPoints() > 0 && spiderman.getHitPoints() > 0)
	{
		i = random_integer(3);
		usleep(100000);
		if (i == 0)
		{
			spiderman.attack(enemies[random_integer(5)]);
			usleep(100000);
		}
		else if (i == 1)
		{
			spiderman.takeDamage(damage[random_integer(4)]);
			usleep(100000);
		}
		else
		{
			spiderman.beRepaired(repair[random_integer(4)]);
			usleep(100000);
		}
	}
	if (spiderman.getEnergyPoints() == 0)
		std::cout << YELL << "----- " << spiderman.getName() << " needs to rest -----" << D << "\n";
	if (spiderman.getHitPoints() == 0)
		std::cout << RED << "----- " << spiderman.getName() << " died -----" << D << "\n";
	return 0;
}
