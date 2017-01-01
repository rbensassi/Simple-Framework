#ifndef __TAQUIN__
#define __TAQUIN__

#include <iostream>
#include "../Framework/Board.hpp"

class Taquin : public Board<int>{
public:
  Taquin(int a, int b) : Board(a,b){}
  virtual void init();
  virtual bool apply_move(Direction);
  virtual bool has_win();
  virtual ~Taquin(){};
};

using namespace std;
#include "Taquin.cpp"

#endif
