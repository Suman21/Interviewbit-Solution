/**
 * @input A : Integer
 * 
 * @Output 2D int array. You need to malloc memory. Fill in number_of_rows as row.
 * For each row i, A[i][0] should indicate the number of columns in row i. 
 * Then A[i][1] to A[i][col] should have the values in those columns.
 */
int ** generate(int A, int *number_of_rows) {
	int **Array,i,j,c;
	*number_of_rows=A;
	if(A==0)
	    return NULL;
	Array=(int**)malloc(sizeof(int*)*A);
	for(i=0;i<A;i++)
	Array[i]=(int *)malloc(sizeof(int)*(i+2));
	Array[0][0]=1;Array[0][1]=1;
    if(A==1)
        return Array;
	Array[1][0]=2;Array[1][1]=1;Array[1][2]=1;
	for(i=2;i<A;i++)
	{
	    Array[i][0]=i+1;
	    for(j=1;j<=i+1;j++)
	    {
	        if(j==1 || j==i+1)
	        {
	            Array[i][j]=1;
	        }
	        else
	        {
	            Array[i][j]=Array[i-1][j-1]+Array[i-1][j];
	        }
	    }
	}
	return Array;
}
