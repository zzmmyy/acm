#include<iostream>
using namespace std;

int main()
{
	int m;
	cin>>m;
	
	for(int j = 1; j <= m; j++)
	{	
		int n;
		int x = 1,i = 1;
		cin>>n;
		
		if(n % 2 != 0 && n % 5 != 0)
		{
			while(x!= 0)
			{
				x = x * 10 + 1;
				x = x % n;
				i++;
			}
			cout<<i<<endl;
		}
	}
}
