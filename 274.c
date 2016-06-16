#include<stdio.h>
#define PI 3.1415926

int main()
{
	int n;
	int i;
	double b,y;
	
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++)
	{
		scanf("%lf",&b);
		
		y = PI * b * b / 3;
		printf("%.2f\n",y);
	}
}
