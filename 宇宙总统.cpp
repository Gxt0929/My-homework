#include <bits/stdc++.h>
using namespace std;

struct zt{
	string ps;
	int numb;
	int arr;
}a[30],maxi;

int main() {
	int n,temp = 0;
	int maxn =0;
	
	cin>>n;
	
	int i;
	
	for(i = 1;i<=n;i++)
	{
		cin>>a[i].ps;
		a[i].arr = (a[i].ps).size();
		a[i].numb = i;
//		maxn=max(maxn,a[i].arr);

	}
	
	for(int j = 1;j<=n;j++)
	{
		if((a[j].ps).size() > (maxi.ps).size()){
			maxi.ps=a[j].ps;
			maxi.numb = a[j].numb;
		}
		if((a[j].ps).size() == (maxi.ps).size() && a[j].ps>maxi.ps) {
			maxi.ps=a[j].ps; 
			maxi.numb = a[j].numb;
		}
	}
	
	cout<<maxi.numb<<endl;
	cout<<maxi.ps;

	return 0;
}