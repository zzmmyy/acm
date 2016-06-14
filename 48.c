#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m,i,j;
	int a[1000];
	int ex;
	
	
	scanf("%d",&m);
	
	for(i = 0; i < m; i++)
	{
		a[i] = rand() % 1000 + 1;
	}
		
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
	
	for(i = 0; i < m - 1; i++)
	{
		for(j = i + 1;j < m;j++)
		{
			if(a[i] == a[j])
			{
				m = m - 1;
				a[j] = a[j + 1];
			}
		}
	}
	printf("%d\n",m); 
	
	for(i = 0; i < m; i++)
	{
		printf("%d ",a[i]);
	}
}
