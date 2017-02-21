int Solution::titleToNumber(string A) {
    int i=0,ans=0,c=0;
    while(A[i]!='\0')
    {
        c=A[i]-64;
        if(A[i+1]!='\0')
        {
            ans+=c;
            ans=ans*26;
        }
        else
        {
        ans+=c;
        }
        i++;
    }
    return ans;
}
