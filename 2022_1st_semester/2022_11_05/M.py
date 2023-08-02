def sol(now):
    mod = 1000000000000000031
    base = 42
    anss = 1
    while now :
        if now%2:
            anss*=base
            anss%=mod
        base*=base
        base%=mod
        now//=2    
    return anss
n = input()

n = int(n)
ans = 300
for i in range(1000000,n,-1):
    ans = sol(ans)
print(ans)