#!/usr/bin/python3
for n1 in range(0, 9):
    for n2 in range(n1 + 1, 10):
        print("{:d}{:d}".format(n1, n2), end='')
        if n1 != 8:
            print(", ", end='')
        else:
            print("")
