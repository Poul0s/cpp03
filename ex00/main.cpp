/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:22:28 by psalame           #+#    #+#             */
/*   Updated: 2024/03/13 19:05:50 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
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
	bot.attack("dummy"); // cant attack
	bot.beRepaired(15);

	ClapTrap bot2 = ClapTrap("bot2");
	bot2.takeDamage(5000);
	bot2.beRepaired(15);
	bot2.attack("dummy");
}
