#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

struct coin{
	int m;
	int v;
}a[110];

bool cmp(coin a,coin b)
{
	//判断单价
	//也可以比较性价比
	return a.m * b.v < a.v * b.m;
}

int main()
{
	int n,t;//t背包容量
	cin>>n>>t;
	
	for(int i = 0;i<n;i++)
	{
		cin>>a[i].m>>a[i].v;
	}
	
	sort(a,a+n,cmp);
	int c = t;//背包剩余容量
	int i;
	double ans = 0;
	for(i = 0;i<n;i++)
	{
		if(a[i].m>c) break;
		c -= a[i].m;
		ans += a[i].v;
	}
	
	if(i<n)
	{
		ans += 1.0*c/a[i].m*a[i].v;
		}
	
	cout<<fixed<<setprecision(2)<<ans;
	return 0;
}