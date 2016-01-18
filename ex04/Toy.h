/*
** Toy.h for Toy/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d13/ex00/Toy.h
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Mon Jan 18 10:23:38 2016 petit_x - Marlon Petit
** Last update Mon Jan 18 15:18:45 2016 Marlon Petit
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
  std::string	getName() const;
  void		setName(std::string);
  Toy();
  Toy(int, std::string, const std::string&);
  bool		setAscii(const std::string& file);
  std::string	getAscii() const;
  virtual ~Toy();
  Toy& operator=(Toy const&);
  void		speak(std::string);
  Picture	pict;
  Toy     &operator<<(std::string);
protected:
  int		type;
  std::string	name;
};

std::ostream&	operator<<(std::ostream&, Toy const&);

#endif /* !TOY_H_ */
