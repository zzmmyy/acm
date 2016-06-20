#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m,i,j,x;
	int a[1000];
	int ex;
	
	//输入总共多少个数 
	scanf("%d",&m);
	srand(m);
	//输入数组 
	for(i = 0; i < m; i++)
	{
		scanf("%d",&a[i]);
	}
	
	//去重 
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
	
	//从小到大排序 
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
