/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaeed < tsaeed@student.42amman.com >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:07:46 by tsaeed            #+#    #+#             */
/*   Updated: 2025/11/19 22:24:35 by tsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon& weapon;

	public:
		HumanA(const std::string& name, Weapon& weapon);
		~HumanA();
		void attack() const;
};

#endif

