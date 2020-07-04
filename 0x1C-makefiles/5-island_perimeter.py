#!/usr/bin/python3
""" module comment """


def island_perimeter(grid):
    """ return perimeter of a matrix """
    cont = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j] != 1:
                if i > 0:
                    if grid[i-1][j]:
                        cont += 1
                if j > 0:
                    if grid[i][j-i]:
                        cont += 1
                if j < len(grid[i]) - 1:
                    if grid[i][j+1]:
                        cont += 1
                if i < len(grid) - 1:
                    if grid[i+1][j]:
                        cont += 1
    return cont
