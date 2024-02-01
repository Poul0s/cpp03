/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:22:28 by psalame           #+#    #+#             */
/*   Updated: 2024/01/08 16:30:27 by psalame          ###   ########.fr       */
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
	bot.attack("dummy");
}
