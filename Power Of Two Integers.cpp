bool Solution::isPower(int A) {
    long long int a;
    int i,j;
    for(i=1;i<=sqrt(A);i++)
    {
        for(j=2;j<=32;j++)
        {
            a=pow(i,j);
            if(a==A)
                return true;
            else if(a>A)
                break;
        }
    }
    return false;
}
