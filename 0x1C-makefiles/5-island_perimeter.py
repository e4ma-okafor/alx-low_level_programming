#!/usr/bin/python3
"""
Defines function to find island perimeter
"""


def island_perimeter(grid):
    """ Function that returns the perimeter of island described in grid """
    perimeter = 0
    for rows in range(len(grid)):
        for columns in range(len(grid[rows])):
            if grid[rows][columns] == 1:
                if columns == 0:
                    perimeter += 1
                elif grid[rows][columns - 1] == 0:
                    perimeter += 1
                if columns == (len(grid[rows]) - 1):
                    perimeter += 1
                elif grid[rows][columns + 1] == 0:
                    perimeter += 1
                if rows == 0:
                    perimeter += 1
                elif grid[rows - 1][columns] == 0:
                    perimeter += 1
                if rows == (len(grid) - 1):
                    perimeter += 1
                elif grid[rows + 1][columns] == 0:
                    perimeter += 1
    return perimeter
