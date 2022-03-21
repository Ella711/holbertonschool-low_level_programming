#!/usr/bin/python3
"""
Module for function island_perimeter
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    """
    row, column = len(grid), len(grid[0])
    perimeter = 0
    for i in range(row):
        for j in range(column):
            # Find if there is a 1 on the grid and count as land
            if grid[i][j] == 1:
                perimeter += 4
                # IF position exists AND there is a 1 there
                # Adds to double since loop will be going through that position
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
