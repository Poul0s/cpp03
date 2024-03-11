/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:18:38 by psalame           #+#    #+#             */
/*   Updated: 2024/03/11 14:23:50 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		// constructor/destructor
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& copy);
		~DiamondTrap(void);

		// operator overload
		DiamondTrap&	operator=(const DiamondTrap& copy);

		// member functions
		void	whoAmI();

	private:
		std::string		_name;
};

#endif