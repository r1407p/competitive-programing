
num, ub = input().split()
def ext(l,length):
    # print("ext",l,length,num[l:l+length])
    assert l+length<=len(num)
    return int(num[l:l+length])

inf = int(1e10)
dp = list()
for i in range(21):
    dp.append([inf for i in range(len(num))])

def main():     
    for i in range(min(20,len(num))):
        dp[i+1][i]=1
    for l in range(len(num)-1):
        for i in range(1,20):
            if dp[i][l]==inf:
                continue
            if num[l+1]=='0':
                continue
            if l-i+1<0:
                continue
            last = ext(l+1-i,i)
            for j in range(i,20):
                if l+1+j>=len(num):
                    break
                cur = ext(l+1,j)
                if cur>=last:
                    dp[j][j+1+l]=min(dp[i][l]+1,dp[j][j+l+1])
    
    ans = inf
    for i in range(20):
        # print(i,dp[i][len(num)-1])
        if dp[i][len(num)-1]<inf and ext(len(num)-i,i)<=int(ub):
            ans = dp[i][len(num)-1]
            break
    print(ans if ans<inf else "NO WAY")
main()