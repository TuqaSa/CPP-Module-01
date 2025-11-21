/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaeed < tsaeed@student.42amman.com >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 21:24:52 by tsaeed            #+#    #+#             */
/*   Updated: 2025/11/19 21:42:06 by tsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie () : name ("Unnamed") {}

Zombie::Zombie (std::string name) : name (name) {}

Zombie::~Zombie () { std::cout << name << " destroyed" << std::endl; }

void
Zombie::announce (void)
{
    std::cout << name << ":BraiiiiiiinnnzzzZ... " << std::endl;
}

void
Zombie::setName(std::string name)
{
    this->name = name;
}
