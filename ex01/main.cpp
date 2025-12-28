/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <abenkrar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:52:27 by abenkrar          #+#    #+#             */
/*   Updated: 2025/12/18 15:10:19 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int main()
{
  int n = 10;
  std::string name = "Ahmed";
  Zombie *pointer = zombieHorde(n, name);
  for(int i = 0; i< n; i++)
  {
    pointer[i].announce();
  }
  delete[] pointer;
  return 0;
}
