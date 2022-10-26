#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int n,i,j;
	int arr[25][25] = {0};
	cin>>n;
	
	for(i = 1;i<=n;i++)
	{
		for(j = 1;j<i+1;j++)
		{
//		cout<<1<<" ";
//		cout<<endl;
		arr[i][i] = 1;
		arr[i][1] = 1;
//		cout<<arr[i][j]<<" ";
	}
//		cout<<endl;
	}
	
	for(i = 2;i<=n;i++)
	{
		for(j = 2;j<i+2;j++)
		{
			if(i != j){
				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
			}
		}
	}
	
	for(i = 1;i<=n;i++)
	{
		for(j = 1;j<i+1;j++)
		{
		cout<<arr[i][j]<<" ";
		}		
		cout<<endl;
	}
	return 0;
}