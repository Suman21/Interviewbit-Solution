/**
 * @input A : Integer
 * 
 * @Output 2D int array. You need to malloc memory. Fill in number_of_rows as row, number_of_columns as columns 
 */
int ** generateMatrix(int A, int *number_of_rows, int *number_of_columns) {
	int **Array,i,j,c=1,s=0;
	Array=(int **)malloc(sizeof(int *)*A);
	for(i=0;i<A;i++)
	Array[i]=(int *)malloc(sizeof(int)*A);
	*number_of_rows=A;
	*number_of_columns=A;
	i=0;
	j=0;
	while(c<=A*A)
	{
	    j=s;
	    i=s;
	    while(j<A-s)
	    {
	        Array[i][j]=c;
	        c++;
	        j++;
	    }
	    j--;
	    i++;
	    if(c>A*A)
	        break;
	    while(i<A-s)
	    {
	        Array[i][j]=c;
	        c++;
	        i++;
	    }
	    if(c>A*A)
	        break;
	    i--;
	    j--;
	    while(j>=s)
	    {
	        Array[i][j]=c;
	        c++;
	        j--;
	    }
	    if(c>A*A)
	        break;
	    j++;
	    i--;
	    s++;
	    while(i>=s)
	    {
	        Array[i][j]=c;
	        c++;
	        i--;
	    }
	    i++;
	}
	return Array;
}
