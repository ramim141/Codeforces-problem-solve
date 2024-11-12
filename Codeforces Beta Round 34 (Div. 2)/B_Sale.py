n, m = map(int, input().split())
v= sorted(map(int, input().split()))

s = sum(x for x in v[:m] if x < 0)
print(abs(s))
