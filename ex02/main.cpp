/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:22:28 by psalame           #+#    #+#             */
/*   Updated: 2024/03/07 18:56:40 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

void	test1(void)
{
	FragTrap bot = FragTrap("bot");
	bot.attack("dummy");
	
	ClapTrap frag_in_clap = bot;
	frag_in_clap.attack("dummy");
	frag_in_clap.takeDamage(5);
	frag_in_clap.beRepaired(15);
}

void	test2(void)
{
	FragTrap bot2 ("bot 2");
	bot2.highFivesGuys();
	bot2.highFivesGuys();
}

int	main(void)
{
	test1();
	std::cout << std::endl;
	test2();
}
