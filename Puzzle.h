#ifndef PUZZLE_H
#define PUZZLE_H

#include<iostream> 
using namespace std;

template <typename T>
class Puzzle {

   public: 
      Puzzle();  //default constructor

   private: 
      vector < vector<T> > board; 

};

#endif


