#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;

vector <long long> a;

int main() {
    
    long long m,n;
    long long x,k;
    cin>>n>>m;
    
    for(int i = 0;i<n;i++)
    {
    	cin>>k;
    	a.push_back(k);
	}
	
	for(int i = 0;i<m;i++)
	{
		cin>>x;
		cout<<a[x-1]<<endl;
	}
    return 0;
}