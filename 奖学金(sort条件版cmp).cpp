#include <bits/stdc++.h>
using namespace std;

struct zt {
	int c,m,e;
	int arr;
	int sum;
}a[355],maxi;



bool cmp(zt a,zt b){
	if(a.sum>b.sum){
		return true;
	}else if(a.sum<b.sum){
		return false;
	}
	
	if(a.sum == b.sum){
		if(a.c>b.c){
			return true;
		}else if(a.c<b.c){
			return false;
		}else if(a.c == b.c){
			if(a.arr>b.arr)
			{
				return false;
			}else
			{
				return true;
			}
		}

	}
	
	return false;
	
}

int main() {
	int n,temp = 0;
	int maxn =0;
	
	cin>>n;
	
	int i;
	
	for(i = 1;i<=n;i++)
	{
		cin>>a[i].c>>a[i].m>>a[i].e;
		a[i].sum = a[i].c+a[i].e+a[i].m;
		a[i].arr = i;

	}
	
	sort(a+1,a+n+1,cmp);
	
	for(int i = 1;i<=5;i++)
	{
		cout<<a[i].arr<<" "<<a[i].sum<<endl;
	}
	
	return 0;
}