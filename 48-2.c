#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m,i,j,x;
	int a[1000];
	int ex;
	
	//�����ܹ����ٸ��� 
	scanf("%d",&m);
	srand(m);
	//�������� 
	for(i = 0; i < m; i++)
	{
		scanf("%d",&a[i]);
	}
	
	//ȥ�� 
	for(i = 0; i < m; i++)
	{
		for(j = i + 1;j < m;j++)
		{
			if(a[i] == a[j])
			{
				for(x = j; x < m - 1; x++)
				{
					a[x] = a[x + 1];
				}
				m--;
			}
		}
	}
	
	//��С�������� 
	for(i = 0; i < m; i++)
	{
		for(j = i + 1; j < m; j++)
		{
			if(a[i] > a[j])
			{
				ex = a[i];
				a[i] = a[j];
				a[j] = ex;
			}
		}
	}
	

	printf("%d\n",m); 
	
	for(i = 0; i < m; i++)
	{
		printf("%d ",a[i]);
	}
}
