
dp = dict()


def sol(a,b,md):
    if b==1:
        return a
    if b in dp:
        return dp[b]
    h = b//2
    tmp = sol(a,h,md)%md
    if b%2==0:
        r= (tmp*tmp-2)%md
        dp[b]=r
        return r
    else:
        tmp1 = sol(a,h+1,md)%md
        r= ((tmp*tmp1-a)%md)
        dp[b]=r
        return r
    
    
def main():
    a,b,md=input().split()
    a,b,md=int(a),int(b),int(md)
    a%=md
    print(sol(a,b,md)%md)
main()