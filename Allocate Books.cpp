bool possible(vector<int> &A,int B,int m)
{
    int i,sum=0,student=1;
    for(i=0;i<A.size();i++)
    {
        if(A[i]>m)
            return false;
        if(A[i]+sum>m)
        {
            student++;
            sum=A[i];
            if(student>B)
                return false;
        }
        else
            sum+=A[i];
    }
    return true;
}
int min(int a,int b)
{
    return a>b?b:a;
}
int Solution::books(vector<int> &A, int B) {
    int i,ans=INT_MAX;
    long long int s=0,e,m,sum=0;
    if(A.size()<B)
        return -1;
    for(i=0;i<A.size();i++)
        sum+=A[i];
    e=sum;
    while(e>=s)
    {
        m=(s+e)/2;
        if(possible(A,B,m))
        {
            ans=min(ans,(int)m);
            e=m-1;
        }
        else
            s=m+1;
    }
    return ans;
}
