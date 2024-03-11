/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:21:19 by psalame           #+#    #+#             */
/*   Updated: 2024/03/11 13:33:28 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_guardKeeperMode = false;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}


// operator overload

ScavTrap&	ScavTrap::operator=( const ScavTrap& copy )
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	this->_guardKeeperMode = copy._guardKeeperMode;
	return (*this);
}


// member functions

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->_name
			<< " attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage!"
		<< std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " can't attack, he has no more energy points left." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	this->_guardKeeperMode = !this->_guardKeeperMode;
	if (this->_guardKeeperMode)
		std::cout << "ScavTrap " << this->_name << " is now in guard keeper mode!" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " disable his guard keeper mode!" << std::endl;
}
