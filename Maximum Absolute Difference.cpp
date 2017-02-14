#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}
int fun(vector<int> &A)
{
	int i,j,r=0,Bmax,Bmin;
	vector<int> B;
	vector<int> C;
	for(i=0;i<A.size();i++)
		B.push_back(A[i]+i);
	for(i=0;i<A.size();i++)
		C.push_back(A[i]-i);
	Bmax=B[0];Bmin=B[0];
	for(i=0;i<B.size();i++)
	{
		if(Bmax<B[i])
			Bmax=B[i];
		if(Bmin>B[i])
			Bmin=B[i];
	}
	r=Bmax-Bmin;
	Bmax=C[0];Bmin=C[0];
	for(i=0;i<C.size();i++)
	{
		if(Bmax<C[i])
			Bmax=C[i];
		if(Bmin>C[i])
			Bmin=C[i];
	}
	r=max(r,Bmax-Bmin);
	return r;
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
