def solve():
    n = int(input())
    v = sorted(map(int, input().split()))
    mnL = n
    low, high = 1, n

    while high >= low:
        mid = (low + high) // 2
        if mid == 1:
            mnL = min(n - 1, mnL)
            low = mid + 1
            continue

        if any(v[i] + v[i + 1] > v[i + mid - 1] for i in range(n - mid + 1)):
            mnL = min(n - mid, mnL)
            low = mid + 1
        else:
            high = mid - 1

    print(mnL)

def main():
    for _ in range(int(input())):
        solve()

if __name__ == "__main__":
    main()
