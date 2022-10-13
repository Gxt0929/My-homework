#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,i,k,x=1,y=1;
	cin>>n;
	int temp=n,cnt;
	
	for(i=1;i<=n;i++)
	{	
		temp=n;
		for(k = temp-i;k>0;k--)
		{
			cout<<"  ";
			temp--;
			
		}
		for(int j=1;j<=i;j++)
		{
		cout<<setw(2)<<setfill('0')<<y;
		y++;
		}
		cout<<endl;
	}
	return 0;
}
	
    

