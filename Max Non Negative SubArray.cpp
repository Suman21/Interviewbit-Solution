vector<int> Solution::maxset(vector<int> &A) {
    int i=0,l=0,r=0,L=0,R=0;
    long long int s=0,max=-1;
    while(i<A.size())
    {
        if(A[i]>=0)
        {
            s+=A[i];
            r++;
        }
        else
        {
                l=i+1;
                r=i+1;
                s=0;
        }
        if(s>=max)
        {
            if((R-L<r-l) || max<s)
            {
                R=r;
                L=l;
            }
            max=s;
        }
        i++;
    }
    vector<int> ans;
    for(i=L;i<R;i++)
    {
        ans.push_back(A[i]);
    }
    return ans;
}
