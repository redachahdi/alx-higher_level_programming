#!/usr/bin/python3

j = 1
for y in range(9):
    for z in range(j, 10):
        if j != 9:
            print('{:d}{:d}, '.format(y, z), end="")
        else:
            print('{:d}{:d}'.format(y, z))
    j += 1
