#include<iostream>
using namespace std;

int main()
{
	double avg,a[12],sum = 0;
	
	for(int i = 0; i < 12; i++)
	{
		cin>>a[i];
		sum += a[i];
	}
	avg = sum / 12.00;
	cout<<avg<<endl;
} 
