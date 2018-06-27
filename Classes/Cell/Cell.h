// Copyright 2018, Vincent S. Kataikko,
// Licenced under Creative Commons Attribution-NonCommercial 4.0 International
// RootBois Studios
// Author: Vincent S. Kataikko <vincent@kataikko.de>


#ifndef CELL_H_
#define CELL_H_

class Cell {
 private:
    // number of this Cell
    int _number;

    // possible Values of this Cell
    int* _possibleValues;

    //
    bool _used;

    // Row this Cell is in
    int _row;

    // Column this Cell is in
    int _column;

 public:
    // Constructor
    Cell(int row, int column);

    // Explicit Constructor for initialisation with value
    explicit Cell(int row, int column, int value);

    // Deconstructor
    ~Cell();

    // get number of Cell, if there is number, return it, else -1
    int getNumber();

    // get possible values for this Cell, if there is already a value
    // return array with no elements
    int* getPosValues();

    //
    int getRow();

    //
    int getCol();

    // set the number of this cell to value
    void setNumber(int value);

    // set possible Values of this Cell to values
    void setPosValues(int* values);

    // returns _used value
    bool isUsed();

};
#endif //SUDOKU_SOLVER_CELL_H
