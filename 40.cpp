#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for(int a = 1; a <= n; a++)
	{
		int i,j;
		cin>>i>>j;
		
		if(i > j)
		{
			int m = j; 
			int di = 1;//公约数
			int mu;//公倍数 
			for(int b = 1; b <= m; b++)
			{
				if(i % b == 0 && j % b == 0)
				{
					di = b; 
				}	
			}
			cout<<di<<" ";
			
			mu = (i / di) * j;
			cout<<mu<<endl;
		}
		
		if(i <= j)
		{
			int m = i; 
			int di = 1;//公约数
			int mu = 1;//公倍数 
			for(int b = 1; b <= m; b++)
			{
				if(i % b == 0 && j % b == 0)
				{
					di = b; 
				}	
			}
			cout<<di<<" ";
			
			mu = (i / di) * j;
			cout<<mu<<endl;
		}
	}
}
