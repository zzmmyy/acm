//���Ϊ�����α�ʾ�ƿ���ż���α�ʾ�ƿ��� 
#include<iostream>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int cishu[1000] = {0}; 
	int a = 0;
	//����ÿ������ÿ����������ʱ��һ
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
	//�����Щ�ƿ���
	for(int i = 1; i <= n; i++)
	{
		if(cishu[i] % 2 != 0)
		{
			cout<<i<<" ";
		}
	}
} 
