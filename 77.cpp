#include<iostream>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;

	//���Ϊ�����α�ʾ�ƹأ�ż���α�ʾ�ƿ� 
	int d[1000] = { 0 };//��ʾ�ڼ����� 
	int cishu[1000] = { 0 };//��ʾ�ƵĿ��ش��� 
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
