int Solution::search(const vector<int> &A, int B) {
    int s=0,e=A.size()-1,m,mid=0;
    while(e>=s)
    {
        m=(s+e)/2;
        if(A[m]>A[m+1] && m+1!=A.size())
            {
                mid=m;
                break;
            }
        else if(A[s]>A[m])
            e=m-1;
        else
            s=m+1;
    }
    s=0;
    e=mid;
    while(e>=s)
    {
        m=(s+e)/2;
        if(A[m]==B)
            return m;
        else if(A[m]>B)
            e=m-1;
        else
            s=m+1;
    }
    s=mid+1;
    e=A.size()-1;
    while(e>=s)
    {
        m=(s+e)/2;
        if(A[m]==B)
            return m;
        else if(A[m]>B)
            e=m-1;
        else
            s=m+1;
    }
    return -1;
}
