#include<iostream>
using namespace std;

int main()
{
	int n; 
	cin>>n;
	
	while(n--)
	{
		int m;
		int c = 0;
		cin>>m;
		
		while(m != 0)
		{
			if(m % 2 == 1)
			{
				c++;
			}
			m /= 2; 
		}
		cout<<c<<endl;
	}
}
