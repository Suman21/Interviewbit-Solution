#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> &A)
{
	int i,temp;
	for(i=0;i<A.size()/2;i++)
	{
		temp=A[i];
		A[i]=A[A.size()-1-i];
		A[A.size()-1-i]=temp;
	}
	return A;
}
vector<int> fun(vector<int> &A)
{
	int i=0,temp,c=1;
	while(A[i]==0)
	{
		A.erase(A.begin()+i);
	}
	A=reverse(A);
	i=0;
	while(i<A.size())
	{
		temp=A[i]+c;
		A[i]=temp%10;
		c=temp/10;
		i++;
	}
	if(c==1)
		A.push_back(c);
	A=reverse(A);
	return A;
}
main()
{
	int n,d;
	vector<int>A; 
	cin>>n;
	while(n--)
	{
		cin>>d;
		A.push_back(d);
	}
	A=fun(A);
	for(d=0;d<A.size();d++)
	cout<<A[d];
}
