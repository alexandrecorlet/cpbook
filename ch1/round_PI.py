# CP4 book: Given a n integer n (n <= 15), print PI to n digits 
# after the decimal point (rounded).
# author: uncoded

from math import pi


def main():
    n = int(input())
    print(round(pi, n))


if __name__ == "__main__":
    main()

