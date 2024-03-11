/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:14:02 by psalame           #+#    #+#             */
/*   Updated: 2024/03/11 14:24:35 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>
#include <iostream>

// constructor/destructor
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap")
{
	std::cout << "DiamondTrap name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_hitPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}


// operator overload

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& copy )
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}


// member functions
void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << this->_name << " and " << ClapTrap::_name << std::endl;
}