/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaeed < tsaeed@student.42amman.com >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 00:00:00 by tsaeed            #+#    #+#             */
/*   Updated: 2025/11/21 11:59:47 by tsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <level>" << std::endl;
        return 1;
    }

    Harl harl;
    std::string level = argv[1];

    int levelIndex = -1;

    if (level == "DEBUG")
        levelIndex = 0;
    else if (level == "INFO")
        levelIndex = 1;
    else if (level == "WARNING")
        levelIndex = 2;
    else if (level == "ERROR")
        levelIndex = 3;

    switch (levelIndex)
    {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            harl.complain("DEBUG");
            std::cout << std::endl;
            // Fall through
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            harl.complain("INFO");
            std::cout << std::endl;
            // Fall through
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            harl.complain("WARNING");
            std::cout << std::endl;
            // Fall through
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }

    return 0;
}
