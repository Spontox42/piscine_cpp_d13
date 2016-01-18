/*
** Picture.h for Picture/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d13/ex00/Picture.h
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Mon Jan 18 10:08:52 2016 petit_x - Marlon Petit
** Last update Mon Jan 18 10:49:14 2016 Marlon Petit
*/

#ifndef PICTURE_H_
# define PICTURE_H_

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class		Picture
{
public:
  std::string	data;
  bool		getPictureFromFile(const std::string& file);
  Picture(const std::string& file);
  Picture();
  virtual ~Picture();
  Picture& operator=(Picture const&);
};

#endif /* !PICTURE_H_ */
