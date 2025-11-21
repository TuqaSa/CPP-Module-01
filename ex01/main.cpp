/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaeed < tsaeed@student.42amman.com >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 21:25:00 by tsaeed            #+#    #+#             */
/*   Updated: 2025/11/19 21:37:28 by tsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    Zombie* horde = zombieHorde(N, "MoarBrainz");
    if (horde)
    {
        for (int i = 0; i < N; ++i)
            horde[i].announce();
        delete [] horde;
    }
    return 0;
}
