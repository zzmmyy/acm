#include<iostream>
using namespace std;

int main()
{
	int n; 
	cin>>n;
	while(n--)
	{
		int k,x[100],y[100];
		int z = 0;
		int a[100];//��Լ�� 
		cin>>k;
		for(int i = 1; i <= k; i++)//�ҳ�k�����й�Լ�� 
		{
			if(k % i == 0)
			{
				a[z] = i;
				z++;
			}
		}
		
		for(int i = 0; i < z; i++)//�õ�ÿһ��x��y 
		{
			for(int j = i + 1;j < z; j++)
			{
				x[i] = k * (a[i] +a[j]) / a[i];
				y[i] = k * (a[i] + a[j]) / a[j];
				
				cout<<"1/"<<k<<"="<<"1/"<<x[i]<<"+"<<"1/"<<y[i]<<endl;
			}
		}
		cout<<"1/"<<k<<"="<<"1/"<<2 * k<<"+"<<"1/"<<2 * k<<endl; 
	}
}
