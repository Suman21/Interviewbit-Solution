string Solution::convertToTitle(int A) {
    string H="ZABCDEFGHIJKLMNOPQRSTUVWXYZ",ans="";
    int i,c=0;
    while(A>0)
    {
        ans+=H[A%26];
        if(A%26!=0)
        A=A-A%26;
        else
        A=A-26;
        A=A/26;
        c++;
    }
    i=0;
    while(i<c/2)
    {
        char temp=ans[i];
        ans[i]=ans[c-1-i];
        ans[c-1-i]=temp;
        i++;
    }
    return ans;
}
