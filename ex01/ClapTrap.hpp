/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:03:55 by psalame           #+#    #+#             */
/*   Updated: 2024/01/13 17:36:11 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CPP
# define CLAPTRAP_CPP
# include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap( std::string name );
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected:
		std::string		Name;
		unsigned int	HitPoint;
		unsigned int	EnergyPoint;
		unsigned int	AttackDamage;
};

#endif