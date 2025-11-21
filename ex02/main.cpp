/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaeed < tsaeed@student.42amman.com >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 21:49:10 by tsaeed            #+#    #+#             */
/*   Updated: 2025/11/19 22:00:29 by tsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int
main ()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << &brain << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << brain << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    return 0;
}
