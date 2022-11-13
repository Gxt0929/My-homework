#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int a[11000];
int arr[11000];

int main()
{
	int n,k = 0;
	cin>>n;
	
	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
	
	sort(a,a+n);
	
	for(int i = 0;i<n;i++)
	{
		for(int j = i + 1;j<n;j++)
		{
			arr[k] = a[i] + a[j];
			k++;
		}
	}
	
	int cnt = 0;
	
	for(int i = 0;i<(n*(n-1))/2;i++)
	{
//		cout<<arr[i]<<" ";
		for(int j = 0;j<n;j++)
		{
			if(arr[i] == a[j])
			{
				cnt++;
				a[j] = 1;
			}
		}
	}
	
	cout<<cnt<<endl;
	return 0;
}