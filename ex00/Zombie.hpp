/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <abenkrar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:00:59 by abenkrar          #+#    #+#             */
/*   Updated: 2025/12/28 10:33:33 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>
class Zombie
{
  public:
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
  private:
    std::string name;
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif
