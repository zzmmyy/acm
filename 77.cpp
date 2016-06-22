#include<iostream>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;

	//如果为奇数次表示灯关，偶数次表示灯开 
	int d[1000] = { 0 };//表示第几个灯 
	int cishu[1000] = { 0 };//表示灯的开关次数 
 	for(int i = 1; i <= n; i++)
	{
		d[i] = i;
	}
	for(int j = 1; j <= k; j++)
	{
		for(int i = 1; i <= n; i++)
		{
			if(d[i] % j == 0)
			{
				cishu[i]++;
			}
		}
	}
	for(int i = 1; i <= n; i++)
	{
		if(cishu[i] % 2 != 0) 
		cout<<i<<" ";
	}
} 
