#include<iostream>
using namespace std;

int main()
{
	int a;//a×é²âÊÔÊý¾Ý
	int n;
	
	cin>>a;
	for(int i = 1; i <= a; i++)
	{
		int r = 0;
		cin>>n;
		for(int k = n; k >= 1; k--)
		{
			int s = 1;
			for(int j = 1; j <= k; j += 2)
			{
				s *= j;
			}
			r += s;
		}
		cout<<r<<endl;
	}
}
