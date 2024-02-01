/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:10:23 by psalame           #+#    #+#             */
/*   Updated: 2024/01/13 17:37:24 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors

ClapTrap::ClapTrap()
{
	std::cout << "Constructor called." << std::endl;
	this->Name = std::string();
	this->HitPoint = 10;
	this->EnergyPoint = 10;
	this->AttackDamage = 0;
}

ClapTrap::ClapTrap( std::string name )
{
	std::cout << "Constructor called." << std::endl;
	this->Name = name;
	this->HitPoint = 10;
	this->EnergyPoint = 10;
	this->AttackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called." << std::endl;
}


// Member functions

void	ClapTrap::attack(const std::string& target)
{
	if (this->EnergyPoint > 0)
	{
		this->EnergyPoint--;
		std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->Name << " has no more Energy Point and can't attack!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->HitPoint -= amount;
	std::cout << "ClapTrap " << this->Name << " took " << amount << " points of damage, has now " << this->HitPoint << " life points!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoint > 0)
	{
		this->EnergyPoint--;
		this->HitPoint += amount;
		std::cout << "ClapTrap " << this->Name << " repaired itself of " << amount << " life points, has now " << this->HitPoint << " life points!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->Name << " has no more Energy Point and can't be repaired!" << std::endl;
	}
}
