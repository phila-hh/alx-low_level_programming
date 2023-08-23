#!/usr/bin/python3
"""
     island_perimeter module
"""


def neighbour(grid, h, w):
    """
        Returns the number of neighbours of a given square

        Args:
            grid (list): the matrix
            h (int): height parameter
            w (int): width parameter
    """
    nb = 4

    if (h > 0) and grid[h - 1][w]:
        nb -= 1
    if (w > 0) and grid[h][w - 1]:
        nb -= 1
    if (h < len(grid) - 1) and grid[h + 1][w]:
        nb -= 1
    if (w < len(grid[0]) - 1) and grid[h][w + 1]:
        nb -= 1
    return nb


def island_perimeter(grid):
    """
        Returnss the island perimeter

        Args:
            grid (list): the matrix input
    """
    perimeter = 0
    for h in range(len(grid)):
        for w in range(len(grid[0])):
            if grid[h][w] == 1:
                perimeter += neighbour(grid, h, w)
    return perimeter
