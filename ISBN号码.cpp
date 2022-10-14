#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[10];
	char ch[14],c;
	int x = 0;
	
	cin>>ch;
	
	//跳过符号取数字
	for(int i = 0;i < 11;i++)
	{
		if(ch[i] != '-') 
		{
			//使用新数组储存每位数字
			arr[x++] = ch[i]-'0';
		}
	}
	//测试点
//	for(int i = 0 ;i<9;i++)
//	{
//		cout<<arr[i]<<endl;
//	}

	
	int sum = 0;
	//开始求和
	for(int i = 0;i<9;i++)
	{
		sum+=arr[i]*(i+1);
	}	

	sum=sum%11;
	
	//开始判断
	//最后一位可能是X，所以需定义为字符型
	if(sum == 10){
		c = 'X';
	}else{
		c = sum + '0';//转整型
	}
	
	if(c = ch[12]){
		cout<<"Right"<<endl;
	}else{
		ch[12] = c;
		cout<<ch;
	}

	return 0;
}