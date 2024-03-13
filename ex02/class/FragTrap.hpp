/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:19:47 by psalame           #+#    #+#             */
/*   Updated: 2024/03/13 19:13:07 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		// constructor/destructor
		FragTrap(const std::string& name);
		FragTrap(const FragTrap &copy);
		~FragTrap(void);

		// operator overload
		FragTrap&	operator=(const FragTrap& copy);

		// member functions
		void	highFivesGuys(void);
};

#endif