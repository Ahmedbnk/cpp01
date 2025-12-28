/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <abenkrar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 22:11:49 by abenkrar          #+#    #+#             */
/*   Updated: 2025/12/27 22:44:35 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
class HumanB
{
  private:
    std::string name;
    Weapon* weapon;
  public:
    HumanB(const std::string& name);
    void setWeapon(Weapon& weapon);
    void attack();
};

#endif
