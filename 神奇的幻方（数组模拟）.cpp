#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int n,i,j,k = 1;
	int x,y;
	int arr[40][40] = {0};
	
	cin>>n;
	
	for(i = 1;i<=n;i++)
	{
		for(j = 1;j<=n;j++)
		{
			arr[i][j]=0;
//			cout<<arr[i][j]<<" ";
		}
//		cout<<endl;
	}
	
	
	
	while(k<=n*n){
				if(k == 1)
				
					arr[x=1][y=(n+1)/2] = k++;
				else if(x == 1 && y != n)
				
					arr[x=n][++y] = k ++;
				else if(x != 1 && y == n)
				
					arr[--x][y=1] = k ++;
				else if(x == 1 && y == n)
				
					arr[++x][y] = k ++;
				else if(x != 1 && y != n)
				
					if(arr[x-1][y+1] == 0)
					{
						arr[--x][++y] = k ++;
					}else
					{
						arr[++x][y] = k ++;
					}
				
	}
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=n;j++)
		
			cout<<arr[i][j]<<" ";
		
		cout<<endl;
	}
	
	return 0;
}