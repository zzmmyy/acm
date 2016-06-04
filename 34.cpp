#include<iostream>
using namespace std;

int main()
{
	int sum;
	int a,b,c;
	
	cin>>a>>b>>c;
	if(a < 3 && b < 5 && c < 7)
	{
		for(sum = 10; sum <= 101; sum++)
		{
			if(((sum - a) % 3 == 0) && ((sum - b) % 5 == 0) && ((sum - c) % 7 == 0) && sum != 101){
				cout<<sum;
			}
		}
	}else{
		cout<<"wrong cin";
	}
}
