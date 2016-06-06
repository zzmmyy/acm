#include<iostream>
using namespace std;

int main()
{
	int T; 
	cin>>T;
	
	for(int i = 1; i <= T; i++)
	{
		int n;
		cin>>n;
		
		if(n > 1 && n < 100)
		{
			int x = 0, y = 0;
			int ea,eb;
			int a[n],b[n];
			for(int j = 0; j < n; j++)
			{
				cin>>a[j];
			}

			for(int j = 0; j < n; j++)
			{
                for (int o = j; o < n; o++)
                {
                    if (a[j] > a[o])
                    {
                        ea = a[j];
                        a[j] = a[o];
                        a[o] = ea;
                    }
                }
            }

			for(int k = 0; k < n; k++)
			{
				cin>>b[k];
			}

			for(int k = 0; k < n; k++)
			{
                for (int p = k; p < n; p++)
                {
                    if (b[k] > b[p])
                    {
                        eb = b[k];
                        b[k] = b[p];
                        b[p] = eb;
                    }
                }
            }

			for(int l = 0; l < n; l++)
			{
				if(a[l] > b[l])
				{
					x+=2;
				}
				if(b[l] > a[l])
				{
					y+=2;
				}
				if(a[l] == b[l])
				{
					x+=1;
					y+=1;
				}
			}

			if(x > y)
			{
				cout<<"X"<<endl;
			}else if(x == y)
			{
				cout<<"none"<<endl;
			}else if(x < y)
			{
				cout<<"Y"<<endl;
			}
		}
	} 
}
