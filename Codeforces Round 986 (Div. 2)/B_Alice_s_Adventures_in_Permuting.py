for _ in range(int(input())):
    n, b, c = map(int, input().split())
    if b == 0:
        if c >= n:
            print(n)
        elif c in {n - 1, n - 2}:
            print(n - 1)
        else:
            print(-1)
    else:
        print(n if c >= n else n - max(0, 1 + (n - c - 1) // b))
