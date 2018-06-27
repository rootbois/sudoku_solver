// Copyright 2018, Vincent S. Kataikko,
// Licenced under Creative Commons Attribution-NonCommercial 4.0 International
// RootBois Studios
// Author: Vincent S. Kataikko <vincent@kataikko.de>

#include <array>
#include "../Cell/Cell.h"

TEST(CellTest, CellTestConstructors) {
    cell Cell(1,2);
    ASSERT_EQ(1, cell.getRow());
    ASSERT_EQ(2, cell.getCol());
    ASSERT_EQ(-1, cell.getNumber());
    ASSERT_FALSE(cell.isUsed());
    ASSERT_EQ(0, cell.getPosValues().size());

    cell2 Cell(1,2,3);
    ASSERT_EQ(1, cell.getRow());
    ASSERT_EQ(2, cell.getCol());
    ASSERT_EQ(3, cell.getNumber());
    ASSERT_TRUE(cell.isUsed());
    ASSERT_EQ(0, cell.getPosValues().size());
}

TEST(CellTest, CellTestSetPosValues) {
    cell Cell(1, 2);
    cell.setPosValues(std::array<int, 3> = {1,2,3});
    ASSERT_EQ(1, cell.getPosValues()[0]);
    ASSERT_EQ(2, cell.getPosValues()[1]);
    ASSERT_EQ(3, cell.getPosValues()[2]);
}

TEST(CellTest, CellTestSetNumber) {
    cell Cell(1, 2);
    cell.setNumber(3);
    ASSERT_EQ(3, cell.getNumber());
    cell.setNumber(42);
    ASSERT_EQ(42, cell.getNumber());
}