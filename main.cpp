#include <iostream>
#include "Sudoku.h"
#include "Fitness.h"
#include "SudokuFitness.h"
#include "SudokuPopulation.h"

using namespace std;


int main() {
   Sudoku sudoku;

   cout << "Starting program" << endl;

   cout << "Input a sudoku puzzle:";

   cin >> sudoku;

   cout << "Here is your sudoku:" << endl;
   cout << sudoku << endl;

   SudokuFitness fitness = fitness.getInstance();
   cout << "Fitness: " << fitness.howFit(sudoku) << endl;

   SudokuPopulation pop(sudoku, 500);
   cout << "Best variation:" << endl;
   cout << *pop.bestIndividual() << endl;
   cout << "Fitness: " << pop.bestFitness() << endl;

  pop.cull(0.9);
}
