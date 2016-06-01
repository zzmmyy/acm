#include <iostream>
using namespace std;
 
int main()
{
	int m;
	cin>>m;
	for(int i = 1; i <= m; i++)
	{
		int n;
		cin>>n;
		long f1 = 1,f2 = 1;
		long f;
		for(int j =1; j <= n; j++)
		{
			if(j % 2 == 1)
			{	
				f = f1;
				f1 += f2;
			}
			else{
				f = f2;
				f2 += f1;
			}
		}
		cout<<f<<endl;
	}
}
