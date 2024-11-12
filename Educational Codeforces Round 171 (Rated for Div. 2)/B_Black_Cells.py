

def solve():
    n = int(input())
    v = [0] + list(map(int, input().split()))  

    if n % 2 == 0:
        k = 1
        for i in range(1, n, 2):
            k = max(k, v[i + 1] - v[i])
    else:
        k = int(1e18)
        for i in range(n + 1):
            num = 1
            j = 1
            while j + 1 <= n:
                if i + 1 == j:
                    j += 1
                    continue
                num = max(num, v[j + 1] - v[j])
                j += 2
            k = min(k, num)

    print(k)

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
