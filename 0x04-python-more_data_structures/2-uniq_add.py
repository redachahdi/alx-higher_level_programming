#!/usr/bin/python3

def uniq_add(my_list=[]):
    s_u = 0
    uniq = list(set(my_list))
    for y in uniq:
        s_u += y
    return (s_u)
