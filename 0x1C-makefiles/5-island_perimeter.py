#!/usr/bin/python3
"""a function def island_perimeter(grid): that returns the perimeter of the island described in grid."""


def island_perimeter(grid):
    """
        returns the perimeter of the island described in grid:
    """
    wid = len(grid[0])
    heg = len(grid)
    edg = 0
    size = 0

    for i in range(heg):
        for j in range(wid):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edg += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edg += 1
    return size * 4 - edg * 2
