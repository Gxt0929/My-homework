#include <bits/stdc++.h>

using namespace std;


struct nb{
	string name;
	int c,m,e,sum;
}a[1005],ans[1005];

int main () {
	
	int n;
	int i,j ,k;
	cin>>n;
	
	for(i = 0;i<n;i++)
	{
		cin>>a[i].name>>a[i].c>>a[i].m>>a[i].e;
		a[i].sum = a[i].c+a[i].e+a[i].m;
	}
	
	for(i = 0;i<(n*(n-1)/2);i++)
	{
		for(j = i+1;j<n;j++)
		{
			if(abs(a[i].c-a[j].c)<=5&&abs(a[i].m-a[j].m)<=5&&abs(a[i].e-a[j].e)<=5&&abs(a[i].sum-a[j].sum)<=10)
			{
				cout<<a[i].name<<" "<<a[j].name<<endl;
			}
		}
	}
	
	return 0;
}