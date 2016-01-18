/*
** Picture.cpp for Picture/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d13/ex00/Picture.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Mon Jan 18 10:09:00 2016 petit_x - Marlon Petit
** Last update Mon Jan 18 15:02:50 2016 Marlon Petit
*/

#include "Picture.h"

Picture::Picture(const std::string& file)
{
  std::ifstream fs(file.data());

  if (fs.is_open())
    {
      std::stringstream buf;
      buf << fs.rdbuf();
      this->data = buf.str();
      fs.close();
    }
  this->data = "ERROR";
}

bool	Picture::getPictureFromFile(const std::string& file)
{
  std::ifstream fs(file.data());

  if (fs.is_open())
    {
      std::stringstream buf;
      buf << fs.rdbuf();
      this->data = buf.str();
      fs.close();
      return (true);
    }
  this->data = "ERROR";
  return (false);
}

Picture::Picture()
{
  this->data = "";
}

void	Picture::setData(std::string data)
{
  this->data = data;
}

Picture::~Picture()
{}

Picture& Picture::operator=(Picture const& pict)
{
  this->data = pict.data;
  return (*this);
}
