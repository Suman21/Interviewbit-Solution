bool prime(int n)
{
    if(n<2)
        return false;
    if(n<4)
        return true;
    if(n%2==0)
        return false;
    int i=3;
    while(i<=sqrt(n))
    {
        if(n%i==0)
            return false;
        i=i+2;
    }
    return true;
    
}
vector<int> Solution::primesum(int A) {
    int i=2;
    vector<int> ans;
    while(i<A)
    {
        bool flag=prime(i);
        if(flag)
        {
            flag=prime(A-i);
            if(flag)
            {
                ans.push_back(i);
                ans.push_back(A-i);
                return ans;
            }
        }
        i++;
    }
}
