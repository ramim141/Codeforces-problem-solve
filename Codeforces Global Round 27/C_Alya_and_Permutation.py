import math


def solve():
    n = int(input().strip())
    ans = []

    if n == 4:
        ans = [2, 1, 3, 4]
    elif n == 6:
        ans = [1, 2, 4, 6, 5, 3]
    else:
        x = int(math.log2(n))
        y = (1 << x)

        ans = [y, y - 1, y - 2, 3, 1, 2]
        
        ans.extend(range(4, y - 2))
        ans.extend(range(y + 1, n + 1))

        ans.reverse()

    if n % 2 == 1:
        ans.append(n)
        print(n)
    else:
        k = (1 << (int(math.log2(n)) + 1)) - 1
        print(k)

    print(" ".join(map(str, ans)))

def main():
    t = int(input().strip())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
