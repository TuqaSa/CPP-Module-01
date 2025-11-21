/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaeed < tsaeed@student.42amman.com >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:23:33 by tsaeed            #+#    #+#             */
/*   Updated: 2025/11/19 21:14:22 by tsaeed           ###   ########.fr       */
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
