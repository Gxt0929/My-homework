#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main() {
    stack<char> a;
    stack<char> b;
    char x;

	while(x != '@')
	{
		cin>>x;
		if(x =='('||x == ')')
		a.push(x);	
	}
	
	int cnt = 0;
	
	if(a.top()=='(')
	{
		cout<<"NO"<<endl;
		return 0;
	}

	while(a.empty() != 1)
	{
		if(a.top() == ')')
		{
			cnt += 1;
			a.pop();
		}else if(a.top()=='('&&cnt!=0)
		{
			cnt -= 1;
			a.pop();
		}else
		{
			cout<<"NO"<<endl;
			return 0;
		}

	}
	
	if(cnt == 0)
	{
		cout<<"YES"<<endl;
	}else
	{
		cout<<"NO"<<endl;
	}
    return 0;
}