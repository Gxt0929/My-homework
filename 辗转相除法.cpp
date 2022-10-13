#include<bits/stdc++.h>
#include<cmath>
//辗转相除法
using namespace std;
int main()
{
	int a,b;//需要求哪两位数的最大公约数
	int t;//作为容器储存每一步的余数
	cin>>a>>b;
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	cout<<a<<endl;
	return 0;
}