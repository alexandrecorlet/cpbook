# Codeforces Round #339 (Div. 2)
# author: alexandrecorlet


from sys import stdin


def readints():
    """Fast IO"""
    return [int(i) for i in stdin.readline().split()]


def solve(l, r, k):
    num = 1
    ok = False
    while num <= r:
        if l <= num <= r:
            ok = True
            print(num, end=" ")
        num *= k
    if not ok:
        print(-1, end=" ")
    print()


def main():
    l, r, k = readints() 
    solve(l, r, k)


if __name__ == "__main__":
    main()

