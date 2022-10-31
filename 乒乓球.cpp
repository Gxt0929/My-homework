#include <bits/stdc++.h>
using namespace std;

//兵乓球
//按照题目要求开数组
int arr[25 * 2500 + 10];
int f[2] = {11,21};

int main() {
	
	char s;
	int n = 0;
	//输入比赛情况
	while(1)
	{
		cin>>s;
		if(s == 'W')
		{
			arr[n++] = 1;
		}else if(s == 'L'){
			arr[n++] = 0;
		}else if(s == 'E') break;
	}
	
	//循环两次 11分制和21分制
	for(int j = 0;j<2;j++)
	{
		//归零成绩
		int w = 0,l = 0;
		//计分器
		for(int i = 0;i<n;i++)
		{
			//暂存此时比分差
			w+=arr[i];
			l+=1-arr[i];
			//获胜者超过对应分数且超出对手两分
			if((max(w,l)>=f[j])&&abs(w-l)>=2){
				cout<<w<<":"<<l<<endl;
				//重置比分差
				w=l=0;
			}
		}
		//未完成的比赛也需要输出
		cout<<w<<":"<<l<<endl;
		cout<<endl;
	}
	
	return 0;
}