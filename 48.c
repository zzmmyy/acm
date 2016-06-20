#include<iostream>
using namespace std;
//#include<time.h>
//#include<cstdlib> 
#include<algorithm>
int main()
{
int n, i, j, num;
int a[1000];
//srand(time(NULL));
while(cin >> n)
{
num = 0;
for(i = 0; i < n; ++i)
{
cin >> a[i];
//cout << (a[i] = rand()%1000 + 1) << ' ';
for(j = 0; j < i; ++j)
{
if(a[j] == a[i])
{
a[i] = 0;
}
}
}
//	cout << endl;
sort(a, a + n);
i = -1;
while(!a[++i]);
cout << (num = n - i) << endl;
for(; i < n; ++i)
cout << a[i] << ' ';
cout << endl;
}
}
