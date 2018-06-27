// Copyright 2018, Vincent S. Kataikko,
// Licenced under Creative Commons Attribution-NonCommercial 4.0 International
// RootBois Studios
// Author: Vincent S. Kataikko <vincent@kataikko.de>


#ifndef SUDOKU_SOLVER_CELL_H
#define SUDOKU_SOLVER_CELL_H

class Cell {
 private:
    // number of this Cell
    int _number;

    // possible Values of this Cell
    int* _possibleValues;

 public:
    // Constructor
    Cell();
    // Deconstructor
    ~Cell();
    // get number of Cell, if there is number, return it, else -1
    int getNumber();

    // get possible values for this Cell, if there is already a value
    // return array with no elements
    int* getPosValues();

    // set the number of this cell to value
    void setNumber(int value);

    // set possible Values of this Cell to values
    void setPosValues(int* values);


};
#endif //SUDOKU_SOLVER_CELL_H
