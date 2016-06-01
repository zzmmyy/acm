#include<iostream>
using namespace std;

int main()
{
	int sum;
	int a,b,c;
	
	cin>>a>>b>>c;
	for(sum = 10; sum <= 100; sum++)
	{
		if(((sum - a) % 3 == 0) && ((sum - b) % 5 == 0) && ((sum - c) % 7 == 0))
		cout<<sum;
	}
}
