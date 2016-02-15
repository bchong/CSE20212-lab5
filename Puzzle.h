#ifndef PUZZLE_H
#define PUZZLE_H

#include<iostream> 
#include<vector>
using namespace std;

template <typename T>
class Puzzle {

   public: 
      Puzzle();  //default constructor
      disp();

   private: 
      vector < vector<T> > board; 

};

#endif


