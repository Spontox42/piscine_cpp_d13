/*
** Buzz.h for Buzz/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d13/ex00/Buzz.h
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Mon Jan 18 10:23:38 2016 petit_x - Marlon Petit
** Last update Mon Jan 18 15:30:16 2016 Marlon Petit
*/

#ifndef BUZZ_H_
# define BUZZ_H_

#include <iostream>
#include <string>

#include "Toy.h"

class		Buzz : public Toy
{
public:
  Buzz(std::string, const std::string&);
  Buzz(std::string);
  void		speak(std::string);
  bool		speak_es(std::string);
};

#endif /* !BUZZ_H_ */
