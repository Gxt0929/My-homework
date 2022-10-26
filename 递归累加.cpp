#include <bits/stdc++.h>
#include <string>
using namespace std;

int dg(int x)
{
	if(x == 1) return x;
	
	return x+dg(x-1);
}


int main() {
	int n;
	cin>>n;
	cout<<dg(n)<<endl;
	return 0;
}