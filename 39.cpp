#include<iostream>
using namespace std;

int main()
{	
	int a;
	cin>>a;
	while(a){
		int b,c;
		int sum = 0;
		c = a;
		for(int i = 1; i <= 3; i++)
		{
			b = c % 10;
			c = c / 10;
			sum += (b * b * b);
		}
		if(sum == a)
		{
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
		cin>>a;
	}
}
