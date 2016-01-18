/*
** Toy.cpp for Toy/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d13/ex00/Toy.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Mon Jan 18 10:23:45 2016 petit_x - Marlon Petit
** Last update Mon Jan 18 15:18:55 2016 Marlon Petit
*/

#include "Toy.h"

Toy::Toy(int type, std::string name, const std::string& file)
{
  this->type = type;
  this->name = name;
  this->pict.getPictureFromFile(file);
}

int	Toy::getType()
{
  return (this->type);
}

std::string	Toy::getName() const
{
  return (this->name);
}

void	Toy::setName(std::string name)
{
  this->name = name;
}

Toy::Toy()
{
  this->type = BASIC_TOY;
  this->name = "toy";
}

bool	Toy::setAscii(const std::string& file)
{
  return(this->pict.getPictureFromFile(file));
}

std::string	Toy::getAscii() const
{
  return (this->pict.data);
}

Toy::~Toy()
{}

Toy&	Toy::operator=(Toy const& toy)
{
  this->type = toy.type;
  this->name = toy.name;
  this->pict = toy.pict;
  return (*this);
}

void	Toy::speak(std::string sent)
{
  std::cout << this->name << " \"" << sent << "\"" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, Toy const& s)
{
  os << s.getName() << std::endl << s.getAscii() << std::endl;
  return (os);
}

Toy	&Toy::operator<<(std::string s)
{
  this->pict.setData(s);
  return (*this);
}

