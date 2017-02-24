int Solution::sqrt(int A) {
    long long int mn=1,mx=A/2,mid;
    int c=0;
    if(A==0)
        return 0;
    if(A<4)
        return 1;
    if(A<8)
        return 2;
    while(mx>mn)
    {
        mid=(mx+mn)/2;
        if(mid*mid==A)
            return mid;
        else if(mid*mid>A)
            mx=mid;
        else
            mn=mid+1;
    }   
    return mn-1;
}
