vector<int> Solution::findPerm(const string A, int B) {
    int I=0,i,c1=0,c2=0;
    vector<int> ans;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]=='I')
            I++;
    }
    c1=B-I;
    c2=c1-1;
    ans.push_back(c1);
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]=='I')
        {
            c1++;
            ans.push_back(c1);
        }
        else
        {
            ans.push_back(c2);
            c2--;
        }
    }
    return ans;
}
