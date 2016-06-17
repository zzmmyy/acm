#include<iostream>
using namespace std;

int main()
{
	int n; 
	cin>>n;
	while(n--)
	{
		int k,x,y;
		cin>>k;
		
		for(y = k + 1; y <= 2 * k; y++)
		{
			if((k * y) % (y - k) == 0)
			{
				x = (k * y) / (y - k);

				cout<<"1/"<<k<<"="<<"1/"<<x<<"+"<<"1/"<<y<<endl;
			}
		} 
	}
}
