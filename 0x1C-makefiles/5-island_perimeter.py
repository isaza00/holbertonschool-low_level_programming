#!/usr/bin/python3
""" module comment """


def island_perimeter(grid):
    """ return perimeter of a matrix """
    cont = 0
    height = len(grid)
    width = len(grid[0])
    if grid:
        for i in range(height):
            for j in range(width):
                if grid[i][j] == 0:
                    if i > 0:
                        if grid[i-1][j] == 1:
                            cont += 1
                    if j > 0:
                        if grid[i][j-1] == 1:
                            cont += 1
                    if j < width - 1:
                        if grid[i][j+1] == 1:
                            cont += 1
                    if i < height - 1:
                        if grid[i+1][j] == 1:
                            cont += 1
    return cont
