/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaeed < tsaeed@student.42amman.com >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:07:57 by tsaeed            #+#    #+#             */
/*   Updated: 2025/11/19 22:24:34 by tsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type("") {}

Weapon::Weapon(const std::string& type) : type(type) {}

Weapon::~Weapon() {}

const std::string& Weapon::getType() const
{
	return type;
}

void Weapon::setType(const std::string& newType)
{
	type = newType;
}

