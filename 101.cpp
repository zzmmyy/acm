#include<iostream>
#include<iomanip>
#include<cmath> 
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for(int i = 1; i <= n; i++)
	{
		double x1,y1, x2, y2;
		cin>>x1>>y1>>x2>>y2;
		
		double a;
		
		if(x1 >= 0 && x1 <= 1000 && y1 >= 0 && y1 <= 1000 && x2 >= 0 && x2 <= 1000 && y2 >= 0 && y2 <= 1000)
		{
			a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
			cout<<setprecision(2)<<fixed<<a<<endl;
		}else{
			break;
		}
	}
}
