void Solution::arrange(vector<int> &A) {
    int i;
    for(i=0;i<A.size();i++)
    {
        if(A[i]>=i)
        {
            A[i]=A.size()*A[i]+A[A[i]];
        }
        else
            A[i]=A.size()*A[i]+(A[A[i]]/A.size());
    }
    for(i=0;i<A.size();i++)
    {
        A[i]=A[i]%A.size();
    }
}
