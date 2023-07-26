#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    grid (list): A list of list of integers representing an island.
    
    Returns:
        The perimeter of the island defined in grid.
    """
    island_width = len(grid[0])
    island_height = len(grid)
    island_edges = 0
    island_size = 0

    for index in range(island_height):
        for m in range(island_width):
            if grid[index][m] == 1:
                island_size += 1
                if (m > 0 and grid[index][m - 1] == 1):
                    island_edges += 1
                if (index > 0 and grid[index - 1][m] == 1):
                    island_edges += 1
    return island_size * 4 - island_edges * 2
