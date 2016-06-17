#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n; 
	while(n--)
	{
		unsigned s,m,max;
		int x;
		int a[7];
		for(int i = 0; i < 7; i++)
		{
			cin>>s>>m;
			if(s <= 10 && m <= 10)
			{
				a[i] = s + m;
			}
		}
		max = a[6];
		for(int j = 6; j >= 0; j--)
		{
			if(max <= a[j])
			{
				max = a[j];
				x = j;
			}
		}
		if(max <= 8){
			cout<<0<<endl;
		}else{
			cout<<x + 1<<endl;
		}
	}
} 
