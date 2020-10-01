int Solution::trap(const vector<int> &A) {
    vector<int> left(A.size());
    vector<int> right(A.size());
    
    left[0] = 0;
    for(int i=1;i<A.size();i++)
    {
        left[i] = max(left[i-1], A[i-1]);
    }
    
    right[A.size()-1] = 0;
    for(int i=A.size()-2;i>=0;i--)
    {
        right[i] = max(right[i+1], A[i+1]);
    }
    
    int ans=0;
    for(int i=0;i<A.size();i++)
    {
        int d = min(left[i], right[i]) - A[i];
        if(d<0)
        d = 0;
        
        ans += d;
    }
    return ans;
}

