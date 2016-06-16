#include<iostream>
using namespace std;

int taozi(int);

int main()
{
	int n;
	cin>>n;
	
	for(int i = 1; i <= n; i++)
	{
		int m;
		cin>>m;

		if(m < 29)
		{
			taozi(m);
		}
	} 
}

int taozi(int tian)
{
	int sum = 1;
	for(int j = 1; j <= tian; j++)
	{
		sum = sum * 2 + 2;
	}
	cout<<sum<<endl;
	return sum;	
}
