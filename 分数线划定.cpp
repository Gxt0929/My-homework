#include<bits/stdc++.h>
using namespace std;

struct cj{
	int bmh;
	int bs;
}a[5050];

bool cmp(const cj& x,const cj& y)
{
	if(x.bs == y.bs){
		return x.bmh<y.bmh;
	}
	return x.bs>y.bs;
}

int main()
{	
	int m,n;
	//报名人数n  计划人数m
	cin>>n>>m;
	
	//输入报名号 和 笔试分数
	for(int i = 0;i<n;i++)
	{
		cin>>a[i].bmh>>a[i].bs;
	}
	
	//排序
	sort(a,a+n,cmp);
	
	//定义分数线
	int temp = (m-1) * 1.5;
	int fsx = a[temp].bs;
	
	cout<<fsx;
	
	int cnt = 0;
	
	//录取的人进行记数
	for(int i = 0;i<n;i++)
	{
		if(a[i].bs>=fsx) cnt++;
	}
	
	//输出
	cout<<" "<<cnt<<endl;
	
	
	for(int i = 0;i<cnt;i++)
	{
		cout<<a[i].bmh<<" "<<a[i].bs<<endl;
	}
	
	return 0;
}
