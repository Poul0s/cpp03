/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:50:45 by psalame           #+#    #+#             */
/*   Updated: 2024/03/13 19:19:36 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

// constructor/destructor

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->_name = "DefaultName";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const std::string& name)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}


// operator overload

ClapTrap&	ClapTrap::operator=( const ClapTrap& copy )
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}


// member functions

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " can't attack, he has no more energy points left." << std::endl;
	else if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " can't attack, he died." << std::endl;
	else
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name
			<< " attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage!"
		<< std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " can't be repaired, he has no more energy points left." << std::endl;
	else if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " can't be repaired, he died." << std::endl;
	else
	{
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name
			<< " repaired himself of " << amount << " life points!"
		<< std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " take " << amount << " of damage";
	if (this->_hitPoints > amount)
	{
		this->_hitPoints -= amount;
		std::cout << ", he has " << this->_hitPoints << " hit points left." << std::endl;
	}
	else
	{
		this->_hitPoints = 0;
		std::cout << " and die." << std::endl;
	}
}
