#include<iostream>
using namespace std;

int main()
{
	unsigned m,n;
	cin>>m>>n; 
	while(m > 100 && m < 1000 && n > 100 && n < 1000 )
	{
		int sum = 0;
		int a = 0;
		for(int i = 1; i <= 3; i++)
		{
			sum += m % 10 + n % 10;
			m /= 10;
			n /= 10;
			if(sum >= 10)
			{
				sum = 1;
				a++;
			}else{
				sum = 0;
			}
		}
		cout<<a<<endl;
		
		cin>>m>>n;
	} 
}
