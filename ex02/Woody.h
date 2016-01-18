/*
** Woody.h for Woody/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d13/ex00/Woody.h
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Mon Jan 18 10:23:38 2016 petit_x - Marlon Petit
** Last update Mon Jan 18 11:05:39 2016 Marlon Petit
*/

#ifndef WOODY_H_
# define WOODY_H_

#include <iostream>
#include <string>

#include "Toy.h"

class		Woody : public Toy
{
public:
  Woody(std::string, const std::string&);
  Woody(std::string);
};

#endif /* !WOODY_H_ */
