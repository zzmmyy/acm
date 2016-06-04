#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
 
int main(){
	int x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	
	while(true)
	{
		if(x1 == 0 && x2 == 0 && x3 == 0 && y1 == 0 && y2 == 0 && y3 == 0)
		break;
		double a,b,c,p,s;
		
		a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
		c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
		
		p = (a + b + c) / 2;
		
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		
		cout<<setprecision(1)<<fixed<<s<<endl;
		
		cin>>x1>>y1>>x2>>y2>>x3>>y3;	
	}
}
