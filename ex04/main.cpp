/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <abenkrar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:53:07 by abenkrar          #+#    #+#             */
/*   Updated: 2025/12/28 15:12:34 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string replace(std::string line, std::string s1, std::string s2)
{
  size_t position = line.find(s1);
  while(position != std::string::npos)
  {
    line.erase(position,s1.length());
    line.insert(position,s2);
    position = line.find(s1, position + s2.length());
  }
  return line;
}

int main(int ac, char **av)
{
  if(ac != 4)
  {
    std::cout << "invalid parameters" << std::endl;
    return 1;
  }
  if(av[2][0] == '\0')
  {
    std::cout << "enter a valid s1" << std::endl;
    return 1;
  }
  std::string input_file = av[1];
  std::string output_file = input_file + ".replace";
  std::ifstream input_fd(av[1]);
  std::ofstream output_fd(output_file.c_str());

  if(!input_fd)
  {
    std::cout <<"can't open "<<input_file<< std::endl;
    return 1;
  }

  if(!output_fd)
  {
    std::cout << "can't open "<< output_file<<std::endl;
    return 1;
  }
  std::string line;
  while(getline(input_fd,line))
  {
    line = replace(line + "\n", av[2], av[3]);
    output_fd << line;
  }
  return 0;
}

