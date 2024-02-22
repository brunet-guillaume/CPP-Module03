/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:31:49 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/22 08:55:59 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <string>

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string	name;
		using FragTrap::_hit;
		using ScavTrap::_energy;
		using FragTrap::_attack;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &cpy);

		DiamondTrap	&operator=(const DiamondTrap &rhs);

		~DiamondTrap();

		using	ScavTrap::attack;
		void	whoAmI(void);
};

#endif
