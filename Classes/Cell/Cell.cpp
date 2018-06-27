// Copyright 2018, Vincent S. Kataikko,
// Licenced under Creative Commons Attribution-NonCommercial 4.0 International
// RootBois Studios
// Author: Vincent S. Kataikko <vincent@kataikko.de>

#include "Cell.h"

// ____________________________________________________________________________
Cell::Cell(int row, int column) {
    _number = -1;
    _possibleValues = new int[1]();
    _used = false;
    _row = row;
    _column = column;
}

// ____________________________________________________________________________
Cell::Cell(int row, int column, int value) {
    setNumber(value);
    _possibleValues = new int[1]();
    _used = true;
    _row = row;
    _column = column;
}

// ____________________________________________________________________________
Cell::~Cell() {
    delete[] _possibleValues;
}

// ____________________________________________________________________________
int Cell::getNumber() {
    return _number;
}

// ____________________________________________________________________________
int* Cell::getPosValues() {
    return _possibleValues;
}

// ____________________________________________________________________________
void Cell::setNumber(int value) {
    _number = value;
}

// ____________________________________________________________________________
void Cell::setPosValues(int *values) {
    delete[] _possibleValues;
    _possibleValues = new int[9]();
}

// ____________________________________________________________________________
bool Cell::isUsed() {
    return _used;
}

// ____________________________________________________________________________
int Cell::getCol() {

}

// ____________________________________________________________________________
int Cell::getRow() {

}