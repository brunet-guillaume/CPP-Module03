/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:31:49 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/13 12:02:51 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <string>

class ClapTrap {
	protected:
		std::string		name;
		unsigned int	_hit;
		unsigned int	_energy;
		unsigned int	_attack;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &cpy);
		ClapTrap(std::string name);

		~ClapTrap();

		ClapTrap	&operator=(const ClapTrap &rhs);


		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
