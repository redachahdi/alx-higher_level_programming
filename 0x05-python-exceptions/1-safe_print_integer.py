#!/usr/bin/python3
"""
    that prints the integer with .

    """


def safe_print_integer(value):
    try:
        print('{:d}'.format(value))
        return(True)
    except:
        return False
