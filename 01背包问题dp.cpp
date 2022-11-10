#include <iostream>
#include<cmath>
//算法学习的思维，一步又一步的
//每个动态规划都是从一个网格开始
//01背包
//经典题目
//dp[i][j]=max(dp[i-1][j],dp[i-w[i]]+v[i]);
using namespace std;
int main()
{
    int weight;//背包容量
    int n;//物品数量
    cin>>n>>weight;
    int w[1005];//代表容量
    int v[1005];//代表价值
    int dp[1005][1005]={};
    for(int i=1;i<=n;i++)
        cin>>w[i]>>v[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=weight;j++)
        {
            if(j>=w[i])
                dp[i][j]=max(dp[i-1][j],(dp[i-1][j-w[i]]+v[i]));
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][weight];
    return 0;
}