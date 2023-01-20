#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""

def num_water_neighbors(grid, a, b):

    num = 0

    if a <= 0 or not grid[a - 1][b]:
        num = num + 1
    if b <= 0 or not grid[a][b - 1]:
        num = num + 1
    if b >= len(grid[a]) - 1 or not grid[a][b + 1]:
        num = num + 1
    if a >= len(grid) - 1 or not grid[a + 1][b]:
        num = num + 1

    return num

def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    perimeter = 0
    for a in range(len(grid)):
        for b in range(len(grid[a])):
            if grid[a][b]:
                perimeter = perimeter + num_water_neighbors(grid, a, b)

    return perimeter
