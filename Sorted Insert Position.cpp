int Solution::searchInsert(vector<int> &A, int B) {
    int s=0,e=A.size(),mid;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(A[mid]==B)
            return mid;
        else if(A[mid]<=B)
            s=mid+1;
        else
            e=mid-1;
    }
    if(A.size()==mid)
        return mid;
    if(A[mid]>B)
        return mid;
    return mid+1;
}
