def main():
    n, m = map(int, input().split())
    v = list(map(int, input().split()))
    
    cnt = 0

    for i in range(m - 1):
        if v[i] <= v[i + 1]:
            cnt += (v[i + 1] - v[i])
        else:
            cnt += (n - v[i] + v[i + 1])
    print(cnt + v[0] - 1)

if __name__ == "__main__":
    main()
