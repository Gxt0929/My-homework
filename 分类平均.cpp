#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;		//给定n和k
	double a,b,temp=0,temp1=0,sum1=0,sum2=0,t1=0,t2=0;
	cin>>n>>k;
	
	for(int i=1;i<=n;i++){
		if(i%k==0)//A类数出现条件
		{
			temp=i;
			a=temp;
			sum1+=a;//A类数总和
			t1++;	//A类数出现次数
		}else//B类数出现条件
		{
			temp1=i;
			b=temp1;
			sum2+=b;//B类数总和
			t2++;	//B类数出现次数
		}
	}
	
	printf("%.1lf %.1lf",sum1/t1,sum2/t2);
	
    return 0;
    
}
