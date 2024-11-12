def main():
    n = int(input())
    v = list(map(int, input().split()))
    
    cnt, mx = 1, 1
    for i in range(1, n):
        mx = mx + 1 if v[i] >= v[i - 1] else 1
        cnt = max(cnt, mx)
    
    print(cnt)

if __name__ == "__main__":
    main()
