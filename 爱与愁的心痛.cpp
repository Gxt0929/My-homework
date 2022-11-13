#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int a[11000];
int arr[11000];


int main()
{
	int n,m;
	int min = 999999;
	
	cin>>n>>m;
	
	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int sum = 0;
	
	for(int i = 0;i<n-m+1;i++)
	{
		sum = 0;
		int j = i;
		for(int k = 0;k<m;k++)
		{
			sum += a[j];
			j++;
		}
		if(sum<min)
		{
			min = sum;
		}
	}
	cout<<min;
	return 0;
}