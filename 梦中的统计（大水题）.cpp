#include <bits/stdc++.h>
#include <string>
using namespace std;

int main ()
{
	int m,n,temp = 0,j;
	int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a0=0;
	
	cin>>m>>n;
	
	for(int i = m;i<=n;i++)
	{
//		cout<<i<<endl;
		j = i;
		while(j>0){
			temp = j%10;
			if(temp == 1) a1++;
			if(temp == 2) a2++;
			if(temp == 3) a3++;
			if(temp == 4) a4++;
			if(temp == 5) a5++;
			if(temp == 6) a6++;
			if(temp == 7) a7++;
			if(temp == 8) a8++;
			if(temp == 9) a9++;
			if(temp == 0) a0++;
			j/=10;
		}
		temp = 0;
	}
	
	cout<<a0<<" "<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" "<<a5<<" "<<a6<<" "<<a7<<" "<<a8<<" "<<a9<<endl;
	return 0;
}