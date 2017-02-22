bool Solution::isPalindrome(int A) {
    long long int B=0,s=A;
    if(A<0)
        return false;
    while(s>0)
    {
        B=B*10+s%10;
        s=s/10;
    }
    if(A!=B)
        return false;
    return true;
}
