#!/usr/bin/python3
"""Defining an island's perimeter measuring function."""


def island_perimeter(grid):
    """Returning the island perimeter.

    The grid to rep water by 0 and land by 1.

    Args:
        grid (list): A list of list of ints representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    wdth = len(grid[0])
    heght = len(grid)
    edgs = 0
    sze = 0

    for m in range(heght):
        for n in range(wdth):
            if grid[m][n] == 1:
                sze += 1
                if (n > 0 and grid[m][n - 1] == 1):
                    edgs += 1
                if (m > 0 and grid[m - 1][n] == 1):
                    edgs += 1
    return sze * 4 - edgs * 2
