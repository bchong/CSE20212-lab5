#include<iostream> 
#include<string>
#include<fstream>
#include<vector>
#include "Puzzle.h"

using namespace std;

template <typename T>
Puzzle::Puzzle() {  //default constructor that takes in a file input and sets up vector array for that puzzle
   
   string name;
   string line;
   int row=0, col=0;

   cout << "Enter a sudoku puzzle file name: " << endl;
   cin >> name;

   ifstream file (name);

   while (file.is_open()==0) {
      cout << "Unable to open file, enter a new file name:" << endl;
      cin >> name;
      file.open(name);
   }
   //after checking that file exists and is open
   //set up array
   while (file.eof()==0) { //while not at end of file
      getline(file, line); 
      istringstream sp(line);
      while (sp) {
	 <T> c;
	 sp >> c;
	 board[row].push_back(c);
	 row++;
      }
   }

   //close file
   file.close();
      
}

template <typename T>
void Puzzle::disp(){ 

   vector<T>::const_iterator i;
   vector<T>::const_iterator j;

   for (row=0; row<9; row++) {
      for (i==board[row].begin(); i!=board[row].end(); ++i) {
         for (j==board


