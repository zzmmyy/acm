#include<iostream>
using namespace std;

int main()
{
	int min,max;//ÖÐ¼äÊý
	int a, b, c, d, e;
	
	cin>>a>>b>>c>>d>>e;
	
	min = a;
	if(min > b)
	{
		min = b;
	}
	if(min > c)
	{
		min = c;
	}
	if(min > d)
	{
		min = d;
	}
	if(min > e)
	{
		min = e;
	}
	cout<<min<<" ";	
	
	max = a;
	if(max < b)
	{
		max = b;
	}
	if(max < c)
	{
		max = c;
	}
	if(max < d)
	{
		max = d;
	}
	if(max < e)
	{
		max = e;
	}
	cout<<max<<endl;
}
