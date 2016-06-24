#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	while(n--)
	{
		int m, a[15],ex;
		
		cin>>m;
		
		if(m >0 && m <= 15)
		{
			//输入王子的年龄 
			for(int i = 0; i < m; i++)
			{
				cin>>a[i];
			}
			
			//将年龄按从小到大的顺序排序
			for(int i = 0; i < m; i++)
			{
				for(int j = i + 1; j < m; j++)
				{
					if(a[i] > a[j])
					{
						ex = a[i];
						a[i] = a[j];
						a[j] = ex;
					}
				}
			}
			
			//分别处理偶数位王子和奇数位王子的情况 
			if(m % 2 != 0)
			{
				cout<<a[(m - 1) / 2]<<endl;
			}else{
				cout<<a[m / 2]<<endl;
			}
		}	
	}
} 
