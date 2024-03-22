#!/usr/bin/python3
"""
This module contains a function to calculate the perimeter of an island.
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in grid.

    Args:
        grid (list of list of int): The grid representing the island.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0

    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                for dx, dy in directions:
                    ni, nj = i + dx, j + dy
                    if 0 <= ni < len(grid) and 0 <= nj < len(grid[0]):
                        if grid[ni][nj] == 1:
                            perimeter -= 1

    return perimeter

