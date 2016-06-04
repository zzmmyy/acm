#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int N;
	cin>>N;
	
	for(int i = 1; i <= N; i++)
	{
		int m,x,y,z;
		cin>>m>>x>>y>>z;
		double sum;
		
		if(x < y && y < z)
		{
			sum = z * ((double)(x * m) / (y - x));
			cout<<setprecision(2)<<fixed<<sum<<endl;
		}else{
			cout<<"wrong number";
		}
	}
}
