/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:19:47 by psalame           #+#    #+#             */
/*   Updated: 2024/03/11 13:34:16 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		// constructor/destructor
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &copy);
		~ScavTrap(void);

		// operator overload
		ScavTrap&	operator=(const ScavTrap& copy);

		// member functions
		void	attack(const std::string& target);
		void	guardGate(void);
	
	private:
		bool	_guardKeeperMode;
};

#endif