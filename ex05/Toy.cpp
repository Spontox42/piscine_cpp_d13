/*
** Toy.cpp for Toy/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d13/ex00/Toy.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Mon Jan 18 10:23:45 2016 petit_x - Marlon Petit
** Last update Tue Jan 19 09:35:30 2016 Marlon Petit
*/

#include "Toy.h"

Toy::Toy(int type, std::string name, const std::string& file)
{
  this->type = type;
  this->name = name;
  this->es = false;
  this->pict.getPictureFromFile(file);
  this->error.type = Error::UNKNOWN;
}

int	Toy::getType() const
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
  this->error.type = Error::UNKNOWN;
  this->es = false;
}

bool	Toy::setAscii(const std::string& file)
{
  if (this->pict.getPictureFromFile(file) == true)
    return (true);
  else
    {
      this->error.type = Error::PICTURE;
      return (false);
    }
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
  this->es = toy.es;
  this->error = toy.error;
  return (*this);
}

void	Toy::speak(std::string sent)
{
  if (this->type == BUZZ)
    std::cout << "BUZZ: ";
  else if (this->type == WOODY)
    std::cout << "WOODY: ";
  std::cout << this->name << " \"" << sent << "\"" << std::endl;
}

bool	Toy::speak_es(std::string sent)
{
  if (this->es == true)
    {
      std::cout << this->name << " \"" << sent << "\"" << std::endl;
      return (true);
    }
  this->error.type = Error::SPEAK;
  return (false);
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

std::string	Toy::Error::what() const
{
  if (this->type == PICTURE)
    return ("bad new illustration");
  else if (this->type == SPEAK)
    return ("wrong mode");
  return ("");
}

std::string	Toy::Error::where() const
{
  if (this->type == PICTURE)
    return ("setAscii");
  else if (this->type == SPEAK)
    return ("speak_es");
  return ("");
}

Toy::Error	Toy::getLastError()
{
  return (this->error);
}
