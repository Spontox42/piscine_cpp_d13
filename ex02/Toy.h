/*
** Toy.h for Toy/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d13/ex00/Toy.h
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Mon Jan 18 10:23:38 2016 petit_x - Marlon Petit
** Last update Mon Jan 18 10:59:22 2016 Marlon Petit
*/

#ifndef TOY_H_
# define TOY_H_

#include <iostream>
#include <string>

#include "Picture.h"

class		Toy
{
public:
  enum{BASIC_TOY, ALIEN, BUZZ, WOODY};
  int		getType();
  std::string	getName();
  void		setName(std::string);
  Toy();
  Toy(int, std::string, const std::string&);
  bool		setAscii(const std::string& file);
  std::string	getAscii();
  virtual ~Toy();
  Toy& operator=(Toy const&);
protected:
  int		type;
  std::string	name;
  Picture	pict;
};

#endif /* !TOY_H_ */
