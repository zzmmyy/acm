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
			//�������ӵ����� 
			for(int i = 0; i < m; i++)
			{
				cin>>a[i];
			}
			
			//�����䰴��С�����˳������
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
			
			//�ֱ���ż��λ���Ӻ�����λ���ӵ���� 
			if(m % 2 != 0)
			{
				cout<<a[(m - 1) / 2]<<endl;
			}else{
				cout<<a[m / 2]<<endl;
			}
		}	
	}
} 
