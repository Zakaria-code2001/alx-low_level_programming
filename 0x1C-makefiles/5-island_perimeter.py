#!/usr/bin/python3
""" a function def island_perimeter(grid): that returns the perimeter of the island described in grid."""
def island_perimeter(grid):
    """This function Returns the perimeter of a give grid"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 1
                if i < len(grid) - 1 and grid[i+1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 1
                if j < len(grid[0]) - 1 and grid[i][j+1] == 1:
                    perimeter -= 1
    return perimeter
