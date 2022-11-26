#include <bits/stdc++.h>

using namespace std;

int a[200010];
int b[200010];
int c[200010];

int main () {
	string a;
	string s;
	
	getline(cin,a);
	getline(cin,s);
	
	//大写字母转换为小写
	for(int i = 0;i < a.size();i++)
	{
		if(a[i] >= 'A' && a[i] <= 'Z')
		{
			a[i] += 'a' - 'A';
		}
	}
	
	//转换文章中字母的大小写
	for(int i = 0;i < s.size();i++)
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] += 'a' - 'A';
		}
	}
	a = " "+a+" ";
	s = " "+s+" ";
	
	//找单词
	if(s.find(a) == -1)
	{
		cout<<-1<<endl;
	}else{
		int x = s.find(a);
		int y = s.find(a);
		int cnt = 0;
		
			while(y != -1)
			{
				y = s.find(a,y+1);
				cnt++;
			}
		cout<<cnt<<" "<<x<<endl;
	}
	
	return 0;
}