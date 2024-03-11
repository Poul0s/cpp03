/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:19:47 by psalame           #+#    #+#             */
/*   Updated: 2024/03/11 14:28:58 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		// constructor/destructor
		ScavTrap(void);
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