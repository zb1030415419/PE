target = 50
dp=[-1]*55
def dfs(remain):
    if remain<0:
        return 0
    elif remain==0:
        return 1
    elif dp[remain]>=0:
        return dp[remain]
    ans=0
    for i in range(1,5):
        ans+=dfs(remain-i)
    dp[remain]=ans
    return ans

print(dfs(target))
