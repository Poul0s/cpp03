/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:27:37 by psalame           #+#    #+#             */
/*   Updated: 2024/01/13 17:55:34 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors

FragTrap::FragTrap( std::string name )
{
	std::cout << "Constructor FragTrap called." << std::endl;
	this->Name = name;
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap called." << std::endl;
}

// Function member

void	FragTrap::attack(const std::string& target)
{
	if (this->EnergyPoint > 0)
	{
		this->EnergyPoint--;
		std::cout << "FragTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << this->Name << " has no more Energy Point and can't attack!" << std::endl;
	}
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->Name << " requested a high five." << std::endl;
}
