#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int a[11000] = {0};
	int arr[11000] = {0};
	int i = 0;
	int o  = 0;
	
	cin>>n;
	
	while(cin>>a[i])
	{
		i++;
	}
	
	for(int j = 0;j<i;j++)
	{
		if(j%2 == 0)
		{
			for(int k = 0;k<a[j];k++)
			{
				arr[o] = 0;
				o++;
			}
		}else{
			for(int k = 0;k<a[j];k++)
			{
				arr[o] = 1;
				o++;
			}
		}
	}
	
	o = 0;
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n;j++)
		{
			cout<<arr[o];
			o++;
		}
		cout<<endl;
	}
	return 0;
}