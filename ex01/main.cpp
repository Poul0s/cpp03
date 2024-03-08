/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:22:28 by psalame           #+#    #+#             */
/*   Updated: 2024/03/07 18:47:52 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

void	test1(void)
{
	ScavTrap bot = ScavTrap("bot");
	bot.attack("dummy");
	
	ClapTrap scav_in_clap = bot;
	scav_in_clap.attack("dummy");
	scav_in_clap.takeDamage(1);
	scav_in_clap.takeDamage(5);
	scav_in_clap.attack("dummy");
	scav_in_clap.attack("dummy");
	scav_in_clap.attack("dummy");
	scav_in_clap.attack("dummy");
	scav_in_clap.attack("dummy");
	scav_in_clap.attack("dummy");
	scav_in_clap.beRepaired(15);
	scav_in_clap.attack("dummy");
	scav_in_clap.attack("dummy");
	scav_in_clap.attack("dummy"); // now will work
}

void	test2(void)
{
	ScavTrap bot2 ("bot 2");
	bot2.guardGate();
	bot2.guardGate();
	bot2.guardGate();
}

int	main(void)
{
	test1();
	std::cout << std::endl;
	test2();
}
