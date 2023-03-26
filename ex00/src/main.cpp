/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:19:42 by mochan            #+#    #+#             */
/*   Updated: 2023/03/26 18:08:24 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main()
{
	ClapTrap ironMan("Iron man");

	std::cout << "_name: " << ironMan.getName() << "\n";
	std::cout << "_hitPoints: " << ironMan.getHitPoints() << "\n";
	std::cout << "_energyPoints: " << ironMan.getEnergyPoints() << "\n";
	std::cout << "_attackDamage: " << ironMan.getAttackDamage() << "\n";
	ironMan.setName("Spiderman");
	ironMan.setHitPoints(12);
	ironMan.setEnergyPoints(20);
	ironMan.setAttackDamage(-5);
	std::cout << "_name: " << ironMan.getName() << "\n";
	std::cout << "_hitPoints: " << ironMan.getHitPoints() << "\n";
	std::cout << "_energyPoints: " << ironMan.getEnergyPoints() << "\n";
	std::cout << "_attackDamage: " << ironMan.getAttackDamage() << "\n";

	return 0;
}
