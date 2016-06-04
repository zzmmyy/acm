#include <iostream>
#include<cmath>
using namespace std;
 
int main(){
	int x1,y1,x2,y2,x3,y3;
	
	cin>>x1>>y1>>x2>>y2>>x3>>y3
	
	while(!0)
	{
		double a,b,c,p,s;
		
		a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
		c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
		
		p = (a + b + c) / 2;
		
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		
		cout<<s<<endl;
	}
}
