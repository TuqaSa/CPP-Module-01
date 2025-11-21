/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaeed < tsaeed@student.42amman.com >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 00:00:00 by tsaeed            #+#    #+#             */
/*   Updated: 2025/11/21 11:55:29 by tsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(void)
{
    Harl harl;

    std::cout << "=== Testing Harl Complaints ===" << std::endl;
    std::cout << std::endl;

    std::cout << "Testing DEBUG:" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;

    std::cout << "Testing INFO:" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;

    std::cout << "Testing WARNING:" << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;

    std::cout << "Testing ERROR:" << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl;

    std::cout << "Testing invalid level:" << std::endl;
    harl.complain("INVALID");
    std::cout << std::endl;

    std::cout << "Testing case sensitivity (lowercase):" << std::endl;
    harl.complain("debug");
    std::cout << std::endl;

    return 0;
}
