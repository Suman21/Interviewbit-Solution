int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int i,left,right,n=A.size(),m=A[0].size();
    for(i=0;i<n;i++)
    if(A[i][0]>B)
    break;
    if(i==0)
    return 0;
    if(i==n&&A[n-1][m-1]<B)
    return 0;
    left=i-1;
    int low=0,high=m-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(A[left][mid]==B)
        return 1;
        if(A[left][mid]>B)
        high=mid-1;
        else
        low=mid+1;
    }
    return 0;
}
