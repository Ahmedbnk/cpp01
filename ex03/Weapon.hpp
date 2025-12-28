/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <abenkrar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 21:53:29 by abenkrar          #+#    #+#             */
/*   Updated: 2025/12/27 22:40:45 by abenkrar         ###   ########.fr       */
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
    Weapon(const std::string& type);
    const std::string& getType();
    void setType(const std::string& type);
};
#endif
