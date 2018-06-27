// Copyright 2018, Vincent S. Kataikko,
// Licenced under Creative Commons Attribution-NonCommercial 4.0 International
// RootBois Studios
// Author: Vincent S. Kataikko <vincent@kataikko.de>

#include <array>
#include "Cell.h"

// ____________________________________________________________________________
Cell::Cell(const int row, const int column) {
    _number = -1;
    _possibleValues = new std::array<int, 0>;
    _used = false;
    _row = row;
    _column = column;
}

// ____________________________________________________________________________
Cell::Cell(const int row, const int column, const int value) {
    setNumber(value);
    _possibleValues = new std::array<int, 0>;
    _used = true;
    _row = row;
    _column = column;
}

// ____________________________________________________________________________
Cell::~Cell() {
    delete[] _possibleValues;
}

// ____________________________________________________________________________
int Cell::getNumber() const {
    return _number;
}

// ____________________________________________________________________________
int* Cell::getPosValues() const {
    return _possibleValues;
}

// ____________________________________________________________________________
void Cell::setNumber(const int value) {
    _number = value;
}

// ____________________________________________________________________________
void Cell::setPosValues(const std::array<int> &values) {
    delete[] _possibleValues;
    _possibleValues = new std::array<int, values.size()>;
    for (int i = 0; i < values.size(); i++) {
        _possibleValues[i] = values[i];
    }
}

// ____________________________________________________________________________
bool Cell::isUsed() const {
    return _used;
}

// ____________________________________________________________________________
int Cell::getCol() const {
    return _column;
}

// ____________________________________________________________________________
int Cell::getRow() const {
    return _row;
}