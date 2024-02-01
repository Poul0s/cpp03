/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragClap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:06:55 by psalame           #+#    #+#             */
/*   Updated: 2024/01/13 17:52:37 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap( std::string name );
		~FragTrap();

		void	attack(const std::string& target);
		void	highFivesGuys();

	private:
};

#endif