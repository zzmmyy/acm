#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	while(n--)
	{
		string a,b;
		int sum = 0;
		cin>>a>>b;
		for(int i = 0; i < a.length(); i++)
		{
			for(int j = 0; j < b.length(); j++)
			{
				sum += (a[i] - '0') * (b[j] - '0');
			}
		}
		cout<<sum<<endl;
	}
}
