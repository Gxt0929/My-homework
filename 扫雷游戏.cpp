#include <bits/stdc++.h>
using namespace std;

long long int arr[110][110];

int main() {
	int x,y;
	char s;
	cin>>x>>y;
	
	for(int i = 1;i<=x;i++)
	{
		for(int j = 1;j<=y;j++)
		{
			cin>>s;
			if(s == '*') arr[i][j] = 1;
		}
	}
	
	for(int i = 1;i<=x;i++)
	{
		for(int j = 1;j<=y;j++)
		{
			if(arr[i][j] == 1) cout<<"*";
			else{
				cout<<arr[i-1][j-1]+arr[i][j-1]+arr[i-1][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j-1]+arr[i-1][j+1];
			}
		}
		cout<<endl;
	}	
	return 0;
}