#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for(int i = 0; i <= n; i++)
	{
		int a[10], h, x = 0;
		
		for(int i = 0; i < 10; i++)
		{
			cin>>a[i];
		}
		cin>>h;
		for(int i = 0; i < 10; i++)
		{
			if(a[i] <= h + 30)
			{
				x = x + 1;
			}
		}
		cout<<x<<endl;
	}	
} 
