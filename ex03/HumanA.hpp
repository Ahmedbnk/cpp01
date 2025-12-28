/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <abenkrar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 21:54:58 by abenkrar          #+#    #+#             */
/*   Updated: 2025/12/27 21:55:09 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
class HumanA
{
  private:
    std::string name;
    Weapon& weapon;

  public:
    HumanA(const std::string& name, Weapon& weapon);
    void attack();
};
#endif

