#include<iostream>
using namespace std;

int main()
{
	int i;
	int j;
	char a,b,c;

	cin>>j;

	for( i = 1;i <= j;i++ )
	{
		cin>>a>>b>>c;
		char ex;

		if(a > b)
		{
			ex = b;
			b = a;
			a = ex;
		}
		if( a > c)
		{
			ex = c;
			c = a;
			a = ex;
		}
		if(b > c)
		{
			ex = c;
			c = b;
			b = ex;
		}
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
}

