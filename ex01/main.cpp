/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:22:28 by psalame           #+#    #+#             */
/*   Updated: 2024/01/13 17:42:13 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap bot = ClapTrap("bot");

	bot.attack("dummy");
	bot.takeDamage(1);
	bot.takeDamage(5);
	bot.attack("dummy");
	bot.attack("dummy");
	bot.attack("dummy");
	bot.attack("dummy");
	bot.attack("dummy");
	bot.attack("dummy");
	bot.beRepaired(15);
	bot.attack("dummy");
	bot.attack("dummy");
	bot.attack("dummy");

	std::cout << std::endl;

	ScavTrap bot2 = ScavTrap("bot 2");
	bot2.attack("dummy");
	bot2.guardGate();
}
