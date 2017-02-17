vector<int> Solution::wave(vector<int> &A) {
    int i;
    sort(A.begin(),A.end());
    for(i=1;i<A.size();i+=2)
    {
        int temp=A[i];
        A[i]=A[i-1];
        A[i-1]=temp;
    }
    return A;
}
