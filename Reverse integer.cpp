int Solution::reverse(int A) {
    long long int S=0;
    int f=0;
    if(A<0)
    {
        f=1;
        A=A*(-1);
    }
    while(A>0)
    {
        S=S*10+A%10;
        A=A/10;
    }
    if(S>INT_MAX)
        return 0;
    if(f==1)
        S=S*(-1);
    return S;
}
