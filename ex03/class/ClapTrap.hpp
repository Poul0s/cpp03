/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:41:29 by psalame           #+#    #+#             */
/*   Updated: 2024/03/13 19:13:12 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>

class ClapTrap {
	public:
		// constructor/destructor
		ClapTrap(void);
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap &copy);
		virtual ~ClapTrap(void);

		// operator overload
		ClapTrap&	operator=(const ClapTrap& copy);

		// member functions
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif