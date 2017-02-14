#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}
int min(int a,int b)
{
	return a>b?b:a;
}
int fun(vector<int> &X,vector<int> &Y )
{
	int c=0,i=1,x,y;
	
	while(i<X.size())
	{
		x=X[i];
		y=Y[i];
		c+=max(abs(x-X[i-1]),abs(y-Y[i-1]));
		i++;
	}
	return c;
}
main()
{
	int i,n,d;
	vector<int> a,b;
	cin>>n;
	while(n--)
	{
		cin>>d;
		a.push_back(d);
		cin>>d;
		b.push_back(d);
	}
	cout<<fun(a,b)<<endl;;
}
