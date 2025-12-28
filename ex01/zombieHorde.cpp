/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <abenkrar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:34:38 by abenkrar          #+#    #+#             */
/*   Updated: 2025/12/18 14:34:38 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
  Zombie *zombies = new Zombie[N];
  for(int i=0; i< N; i++)
  {
    zombies[i].setter(name);
  }
  return (zombies);
}
