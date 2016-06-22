#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	while(n--)
	{
		int n,y,r;
		int sum = 0;
		cin>>n>>y>>r;
		
		if(n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
		{
			int rdate[] = {31,29,31,30,31,30,31,31,30,31,30,31};
			for(int i = 0; i < y - 1; i++)
			{
				sum += rdate[i];
			}
			cout<<sum + r<<endl;
		}else{
			int date[] = {31,28,31,30,31,30,31,31,30,31,30,31};
			
			for(int i = 0; i < y - 1; i++)
			{
				sum += date[i];
			}
			cout<<sum + r<<endl;
		}
	}
} 
