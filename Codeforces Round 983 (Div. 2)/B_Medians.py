def solve():
    n, k = map(int, input().split())
    
    if n == 1:
        print(1)
        print(1)
        return
    if k in (1, n):
        print(-1)
        return
    
    print(3)
    i = [1]
    i.append(k if k % 2 == 0 else k - 1)
    i.append(k + 1 if k % 2 == 0 else k + 2)
    print(*i)

def main():
    for _ in range(int(input())):
        solve()

if __name__ == "__main__":
    main()
