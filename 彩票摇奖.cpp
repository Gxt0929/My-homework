#include <bits/stdc++.h>
#include <string>
using namespace std;

//特等奖：要求彩票上有 7 个号码出现在中奖号码中。
//一等奖：要求彩票上有 6 个号码出现在中奖号码中。
//二等奖：要求彩票上有 5 个号码出现在中奖号码中。
//三等奖：要求彩票上有 4 个号码出现在中奖号码中。
//四等奖：要求彩票上有 3 个号码出现在中奖号码中。
//五等奖：要求彩票上有 2 个号码出现在中奖号码中。
//六等奖：要求彩票上有 1 个号码出现在中奖号码中。
int main ()
{
	int n,zj[7],x;
	int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,cnt = 0;
	cin>>n;
	
	for(int i = 0;i<7;i++)
	{
		cin>>zj[i];
//		cout<<zj[i]<<" ";
	}
	
	for(int i = 0;i<n;i++)
	{
		for(int y = 0;y<7;y++)
		{
			cin>>x;
				for(int k = 0;k<7;k++)
				{
					if(x == zj[k]){
						cnt ++;
					}
				}
			}
			if(cnt == 1) a7++;
			if(cnt == 2) a6++;
			if(cnt == 3) a5++;
			if(cnt == 4) a4++;
			if(cnt == 5) a3++;
			if(cnt == 6) a2++;
			if(cnt == 7) a1++;
			cnt = 0;
	}
	
	cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" "<<a5<<" "<<a6<<" "<<a7<<endl;
	
	return 0;
}