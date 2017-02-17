vector<int> Solution::getRow(int A) {
    int i,j;
    vector<int> ans;
    ans.push_back(1);
    if(A==0)
        return ans;
        ans.clear();
    ans.push_back(1);ans.push_back(1);
    if(A==1)
        return ans;
    for(i=2;i<=A;i++)
    {
        vector<int> extra;
        for(j=0;j<ans.size();j++)
            extra.push_back(ans[j]);
        ans.clear();
        for(j=0;j<=i;j++)
        {
            if(j==0 || j==i)
                ans.push_back(1);
            else
                ans.push_back(extra[j-1]+extra[j]);
        }
    }
    return ans;
}
