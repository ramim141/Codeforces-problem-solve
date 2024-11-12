def solve():
    n = int(input())
    v = sum(map(int, input().split()))
    print(v % 2, min(v, 2 * n - v))

for _ in range(int(input())):
    solve()
