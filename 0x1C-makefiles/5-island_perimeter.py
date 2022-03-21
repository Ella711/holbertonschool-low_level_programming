#!/usr/bin/python3
"""
Module for function island_perimeter
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    """
    row, column = len(grid), len(grid[0])
    land, doubles = 0, 0
    for i in range(row):
        for j in range(column):
            # Find if there is a 1 on the grid and count as land
            if grid[i][j] == 1:
                land += 1
                # IF position exists AND there is a 1 there
                # Adds to double since loop will be going through that position
                if i < row - 1 and grid[i + 1][j] == 1:
                    doubles += 1
                if j < column - 1 and grid[i][j - 1] == 1:
                    doubles += 1
    return land * 4 - 2 * doubles
