#!/usr/bin/python3
""" module"""


def island_perimeter(grid):
    """
    Calculate perimeter of the island.
    Returns the perimeter of the island described in grid
    """
    height = len(grid)
    width = len(grid[0])
    perimeter = 0
    shores = 0
    size = 0

    for x in range(height):
        for y in range(width):
            if (grid[x][y]) == 1:
                size += 1
                if (y > 0 and grid[x][y - 1] == 1):
                    shores += 1
                if (x > 0 and grid[x - 1][y] == 1):
                    shores += 1
    perimeter = size * 4 - shores * 2
    return perimeter
