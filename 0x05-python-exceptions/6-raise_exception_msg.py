#!/usr/bin/python3
"""
    that edit function that raises 
    """


def raise_exception_msg(message=""):
    try:
        raise NameError(message)
    except:
        raise
