/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaeed < tsaeed@student.42amman.com >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 21:24:38 by tsaeed            #+#    #+#             */
/*   Updated: 2025/11/19 21:42:06 by tsaeed           ###   ########.fr       */
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
  void setName(std::string name);
};

Zombie *newZombie (std::string name);
void randomChump (std::string name);
Zombie* zombieHorde( int N, std::string name );

#endif
