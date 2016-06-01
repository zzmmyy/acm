#include <iostream>
using namespace std;

int main() {
	int n,i,j,k;//i表示有几组测试数据，n表示数据的个数
	
	cin>>i;
	for(j = 1; j <= i; j++)
	{
		cin>>n;
			if(n % 2 == 0){
					for(k = 1; k <= n; k++)
			{
				if(k % 2 != 0)
				{
					cout<<k<<" ";
				}
			}
			cout<<endl;
			for(k = 1; k <= n; k++)
			{
				if(k % 2 == 0)
				{
					cout<<k<<" ";
				}
			}
			cout<<endl;
		}
	} 
}
