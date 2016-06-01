#include<iostream>
using namespace std;

int main()
{
	int n,m;//¼¦ÍÃ×ÜÊýn£¬ÍÈÊým
	int a;
	int ji,tu;
	
	cin>>a;
	for(int i = 1; i <= a; i++)
	{
		cin>>n>>m;
		if(m % 2 == 0){
			ji = (4 * n - m) / 2;
			tu = (m - 2 * n) / 2;
			if(ji >= 0 && tu >= 0){
				cout<<ji<<" "<<tu<<endl;
			}else{
				cout<<"No answer"<<endl;
			}
		}else{
			cout<<"No answer"<<endl;
		}
	} 
}
