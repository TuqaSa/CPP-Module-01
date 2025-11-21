/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaeed < tsaeed@student.42amman.com >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:21:07 by tsaeed            #+#    #+#             */
/*   Updated: 2025/11/19 21:14:17 by tsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
  private:
    std::string name;

  public:
    Zombie ();
    Zombie (std::string name);
    ~Zombie ();
    void announce (void);
};

Zombie *newZombie (std::string name);
void randomChump (std::string name);

#endif
