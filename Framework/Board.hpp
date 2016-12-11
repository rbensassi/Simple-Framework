#ifndef __BOARD_HPP__
#define __BOARD_HPP__

#include <iostream>
#include <vector>
#include "Box.hpp"
#include "../Exceptions/NotwellformedBoard.hpp"
#include "Enum_Direction/Direction.hpp"


#define KEYHAUT "z"
#define KEYBAS "s"
#define KEYGAUCHE "q"
#define KEYDROITE "d"

template <typename T>
class Board : public Box<T>{
public:
  Board();
  Board(int,int);
  int get_matrix_length_x();
  int get_matrix_length_y();
  std::vector <std::vector<Box<T>>>& get_plateau();
  void print();
  virtual void init() = 0;
  Direction do_one_move();
  virtual bool apply_move(Direction) = 0;
  operator std::vector <std::vector<Box<T>>>() const { return plateau; }
  void add_to_score(int);
  int get_score();
  int getGridSize();
  void reset_access();
private:
  int score;
  const int matrix_length_x;
  const int matrix_length_y;
  std::vector <std::vector<Box<T>>> plateau;
};

using namespace std;
#include "Board.cpp"

#endif
