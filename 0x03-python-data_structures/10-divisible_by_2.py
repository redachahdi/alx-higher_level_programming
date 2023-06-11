#!/usr/bin/python3

#!/usr/bin/python3


def divisible_by_2(my_list=[]):
    div2_list = []
    for i in my_list:
        if i % 2 == 0:
            div2_list.append(True)
        else:
            div2_list.append(False)
    return div2_list


if __name__ == '__main__':
    my_list = [0, 1, 2, 3, 4, 5, 6]
    list_result = divisible_by_2(my_list)

    k = 0
    t_s = "{:d} {:s} divisible by 2"
    while i < len(list_result):
        print(t_s.format(my_list[k], "is" if list_result[k] else "is not"))
        k += 1
