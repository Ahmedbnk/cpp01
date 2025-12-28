/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <abenkrar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:00:59 by abenkrar          #+#    #+#             */
/*   Updated: 2025/12/18 15:09:35 by abenkrar         ###   ########.fr       */
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
    Zombie();
    ~Zombie();
    void setter(std::string name);
    void announce(void);
  private:
    std::string name;
};
Zombie* zombieHorde( int N, std::string name );
#endif
