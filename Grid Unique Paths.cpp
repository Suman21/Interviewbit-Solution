int Solution::uniquePaths(int A, int B) {
    int **Array,i,j;
    Array=new int*[A];
    for(i=0;i<A;i++)
        Array[i]=new int[B];
    for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
            if(i==0 || j==0)
                Array[i][j]=1;
            else
                Array[i][j]=Array[i-1][j]+Array[i][j-1];
        }
    }
    return Array[A-1][B-1];
}
