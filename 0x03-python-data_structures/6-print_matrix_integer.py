#!/usr/bin/python3

def print_matrix_integer(matrix=[[]]):
    l_m = len(matrix)
    for i in range(l_m):
        for j in range(len(matrix[i])):
            print('{:d}'.format(matrix[i][j]), end='')
            if j is not (len(matrix[i]) - 1):
                print(end=" ")
        print("")
