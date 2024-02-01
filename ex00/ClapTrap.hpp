/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:03:55 by psalame           #+#    #+#             */
/*   Updated: 2024/01/08 16:31:24 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CPP
# define CLAPTRAP_CPP
# include <iostream>

class ClapTrap
{
	public:
		ClapTrap( std::string name );
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		std::string		Name;
		unsigned int	HitPoint;
		unsigned int	EnergyPoint;
		unsigned int	AttackDamage;
};

#endif