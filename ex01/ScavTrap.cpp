/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:27:37 by psalame           #+#    #+#             */
/*   Updated: 2024/01/13 17:38:28 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructors

ScavTrap::ScavTrap( std::string name )
{
	std::cout << "Constructor ScavTrap called." << std::endl;
	this->Name = name;
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap called." << std::endl;
}

// Function member

void	ScavTrap::attack(const std::string& target)
{
	if (this->EnergyPoint > 0)
	{
		this->EnergyPoint--;
		std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->Name << " has no more Energy Point and can't attack!" << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mode." << std::endl;
}
