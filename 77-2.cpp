//如果为奇数次表示灯开，偶数次表示灯开关 
#include<iostream>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int cishu[1000] = {0}; 
	int a = 0;
	//遍历每个数，每当出现整除时加一
	for(int i = 1; i <= k; i ++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(j % i == 0)
			{
				cishu[j] ++;
			}
		}
	}
	//输出那些灯开着
	for(int i = 1; i <= n; i++)
	{
		if(cishu[i] % 2 != 0)
		{
			cout<<i<<" ";
		}
	}
} 
