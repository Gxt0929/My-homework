#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define PI acos(-1)
int main(){
	int n,i,j,x=1;
	cin>>n;
	for(i = n;i>=1;i--){
		for(j = 1;j<=i;j++){	
			cout<<setw(2)<<setfill('0')<<x;
			x++;
				}
				cout<<endl;
			}
	return 0;
}