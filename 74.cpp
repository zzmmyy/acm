#include<iostream>
using namespace std;

int main()
{
	int m,n;
	cin>>m>>n; 
	while(m != 0 && n != 0)
	{
		int sum = 0;
		int a = 0;
		while(m % 10 != 0 && n % 10 != 0)
		{
			sum = m % 10 + n % 10;
			m /= 10;
			n /= 10;
			if(sum >= 10)
			{
				sum = 1;
				a++;
			}
		}
		cout<<a<<endl;
		
		cin>>m>>n; 
	}
}
