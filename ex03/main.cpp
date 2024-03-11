/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:41:10 by psalame           #+#    #+#             */
/*   Updated: 2024/03/11 14:27:21 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
	DiamondTrap bot1 ("bot1");
	DiamondTrap bot2 ("bot2");
	bot1.attack("bot2");
	bot2.takeDamage(30);
	bot2.highFivesGuys();
	bot1.guardGate();

	bot1.whoAmI();
	bot2.whoAmI();

	return (0);
}