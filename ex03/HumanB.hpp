/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaeed < tsaeed@student.42amman.com >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:07:52 by tsaeed            #+#    #+#             */
/*   Updated: 2025/11/19 22:24:37 by tsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon* weapon;

	public:
		HumanB(const std::string& name);
		~HumanB();
		void setWeapon(Weapon& weapon);
		void attack() const;
};

#endif

