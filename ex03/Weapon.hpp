/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaeed < tsaeed@student.42amman.com >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:08:01 by tsaeed            #+#    #+#             */
/*   Updated: 2025/11/19 22:24:25 by tsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
    private:
        std::string type;

    public:
        Weapon();
        Weapon(const std::string& type);
        ~Weapon();

        const std::string& getType() const;
        void setType(const std::string& newType);
};

#endif
