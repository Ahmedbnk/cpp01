/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <abenkrar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 22:11:32 by abenkrar          #+#    #+#             */
/*   Updated: 2025/12/31 19:39:55 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanB.hpp"

HumanB::HumanB(const std::string& name): name(name), weapon(NULL)
{
}
void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
  if (weapon)
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
  else
    std::cout << name << " has no weapon to attack with!" << std::endl;
}
