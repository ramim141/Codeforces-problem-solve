MOD = int(1e9 + 7)
N = int(2e5 + 5)
v = [1] * N


def p(a, b, mod=MOD):
    result = 1
    while b > 0:
        if b & 1:
            result = (result * a) % mod
        b //= 2
        a = (a * a) % mod
    return result


def ncr(n, k, mod=MOD):
    if n < k:
        return 0
    return (v[n] * p((v[n - k] * v[k]) % mod, mod - 2)) % mod


for i in range(1, N):
    v[i] = (v[i - 1] * i) % MOD


t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    ones = sum(a)

  
    ans = 0
    for cnt_ones in range(k // 2 + 1, min(ones, k) + 1):
        ans += ncr(ones, cnt_ones) * ncr(n - ones, k - cnt_ones) % MOD
        ans %= MOD

    print(ans)
