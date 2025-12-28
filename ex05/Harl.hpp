/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <abenkrar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 21:41:07 by abenkrar          #+#    #+#             */
/*   Updated: 2025/12/28 21:46:02 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HARL_HPP
#define HARL_HPP
#include <string>
class Harl
{
  private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
  public:
    void complain(std::string level);
};
#endif
