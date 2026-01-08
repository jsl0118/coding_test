N = int(input())
stairs=[0]+[int(input()) for _ in range(N)]
dp = [0]*(N+1)

def dinamic():
    if N==1:
        return stairs[1]
    if N==2:
        return stairs[1] + stairs[2]
    
    dp[1]=stairs[1]
    dp[2]=stairs[1]+stairs[2]
    dp[3]=max(stairs[1]+stairs[3], stairs[2]+stairs[3])

    for i in range(4, N+1):
        dp[i]=max(dp[i-2]+stairs[i], dp[i-3]+stairs[i-1]+stairs[i])
    return dp[N]

print(dinamic())