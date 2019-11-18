#!/usr/bin/python3


def island_perimeter(grid):
    """ returns the perimeter """

    perimeter = 0
    len_row = len(grid)
    len_column = len(grid[0])
    for row in range(len_row):
        for column in range(len_column):
            if grid[row][column] == 1:
                if grid[row][column - 1] == 0 or column == 0:
                    perimeter += 1
                if len_column - 1 == column:
                    perimeter += 1
                elif grid[row][column + 1] == 0:
                    perimeter += 1
                if grid[row - 1][column] == 0 or row == 0:
                    perimeter += 1
                if len_row - 1 == row:
                    perimeter += 1
                elif grid[row + 1][column] == 0:
                    perimeter += 1
    return perimeter
