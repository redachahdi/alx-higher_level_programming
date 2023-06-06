#!/usr/bin/python3


def remove_char_at(str, n):
    str2 = ''
    if n > len(str) or n < 0:
        return str
    for y in str:
        if y != str[n]:
            str2 += y
    return str2
