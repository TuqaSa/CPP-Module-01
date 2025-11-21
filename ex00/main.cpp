/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaeed < tsaeed@student.42amman.com >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 21:03:43 by tsaeed            #+#    #+#             */
/*   Updated: 2025/11/19 21:21:01 by tsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie;

    randomChump("StackZombie");

    return 0;
}
