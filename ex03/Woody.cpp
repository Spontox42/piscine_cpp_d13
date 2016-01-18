/*
** Woody.cpp for Woody/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d13/ex00/Woody.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Mon Jan 18 10:23:45 2016 petit_x - Marlon Petit
** Last update Mon Jan 18 11:16:16 2016 Marlon Petit
*/

#include "Woody.h"

Woody::Woody(std::string name, const std::string& file) : Toy()
{
  this->type = WOODY;
  this->name = name;
  this->pict.getPictureFromFile(file);
}

Woody::Woody(std::string name)
{
  this->type = WOODY;
  this->name = name;
  this->pict.getPictureFromFile("woody.txt");
}

void	Woody::speak(std::string sent)
{
  std::cout << "WOODY: " << this->name << " \"" << sent << "\"" << std::endl;
}
