#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		long long m,sum;
		cin>>m;
		/*for(int i = 1; i <= m; i++)
		{
			sum *= i;
		}
		cout<<sum<<" ";
		while(sum / 10 != 0)
		{
			w++;
			sum /= 10;
		}
		cout<<w<<endl;
		//double acos(double x)返回x的反余弦弧度。
		//double exp(double x)返回e值的第x次幂。
		*/
		if(m == 1)
		{
			cout<<1<<endl;
		}else{
			sum=(log10(sqrt(4.0*acos(0.0)*m))+m*(log10(m)-log10(exp(1.0))))+1;
			cout<<sum<<endl;	
		}
	}
}
