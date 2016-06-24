#include<iostream>
using namespace std;

int main()
{
	double a;
	cin>>a;
	
	while(a)
	{
		double sum = 0;
		int i = 2;
		int j = 0;
		while( a > sum)
		{
			sum += (double)1/i;
			i += 1;
			j += 1;
		}
		cout<<j<<" card(s)"<<endl;
		
		cin>>a;
	}
}
