/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <abenkrar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 21:54:01 by abenkrar          #+#    #+#             */
/*   Updated: 2025/12/27 21:54:01 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type):type(type)
{
}

const std::string& Weapon::getType()
{
    return type;
}

void Weapon::setType(const std::string& type)
{
    this->type = type;
}
