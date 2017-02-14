#include<iostream>
#include<vector>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}
int fun(vector<int> &A)
{
	int i=1,maxi=A[0],s=A[0];
	while(i<A.size())
	{
		s+=A[i];
		if(A[i]>s)
		{
			s=A[i];
			maxi=max(s,maxi);
		}
		else
		{
			maxi=max(maxi,s);
		}
		i++;
	}
	return maxi;
}
main()
{
	int n,d;
	vector<int> A;
	cin>>n;
	while(n--)
	{
		cin>>d;
		A.push_back(d);
	}
	cout<<fun(A)<<endl;
}
