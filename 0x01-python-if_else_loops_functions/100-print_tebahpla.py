#!/usr/bin/python3

for y in range(122, 96, -1):
    if y % 2 != 0:
        print("{}".format(chr(y - 32)), end="")
    else:
        print("{}".format(chr(y)), end="")
