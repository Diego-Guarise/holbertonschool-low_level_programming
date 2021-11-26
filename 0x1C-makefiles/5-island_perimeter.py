#!/usr/bin/python3
"""
Create a function def island_perimeter(grid): that
returns the perimeter of the island described in grid:
"""


def island_perimeter(grid):
    """grid is a list of list of integers"""
    perimetro = 0
    for fila in range(len(grid)):
        for colu in range(len(grid[fila])):
            if grid[fila][colu] == 1:
                if fila == 0 or grid[fila - 1][colu] == 0:
                    perimetro += 1
                if colu == 0 or grid[fila][colu - 1] == 0:
                    perimetro += 1
                if fila == (len(grid) - 1) or grid[fila + 1][colu] == 0:
                    perimetro += 1
                if colu == (len(grid[fila]) - 1) or grid[fila][colu + 1] == 0:
                    perimetro += 1
    return (perimetro)
