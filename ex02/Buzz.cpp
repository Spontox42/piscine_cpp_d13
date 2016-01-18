/*
** Buzz.cpp for Buzz/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d13/ex00/Buzz.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Mon Jan 18 10:23:45 2016 petit_x - Marlon Petit
** Last update Mon Jan 18 11:04:36 2016 Marlon Petit
*/

#include "Buzz.h"

Buzz::Buzz(std::string name, const std::string& file) : Toy()
{
  this->type = BUZZ;
  this->name = name;
  this->pict.getPictureFromFile(file);
}

Buzz::Buzz(std::string name)
{
  this->type = BUZZ;
  this->name = name;
  this->pict.getPictureFromFile("buzz.txt");
}
