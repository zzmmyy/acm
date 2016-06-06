#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	string c;
	double s,j;
	double sum = 0.0;
	
	while(cin>>c)
	{
		cin>>s>>j;
		sum += s * j;	
	}
	cout<<fixed<<setprecision(1)<<sum<<endl;
}

