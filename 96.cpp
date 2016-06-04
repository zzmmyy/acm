#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int M;
	cin>>M;
	
	for(int i = 1; i <= M; i++)
	{
		unsigned long w;
		cin>>w;
	
		unsigned long s,sum = 0;
		int y;
		s = w;
		double j = 0;
		
		while(s / 10 != 0)
		{
			y = s % 10;
			sum = sum + y * pow(10.00,j);
			s = s / 10;
			j = j + 1;
		}
		cout<<sum<<endl;
	}
}
