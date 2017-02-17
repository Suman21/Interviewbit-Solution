vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int> > ans;
    int i=0,j=0;
    while(i<A.size() && j<A.size())
    {
        vector<int> s;
        int r=0,c=j;
        while(r<=i && c>=0)
        {
            s.push_back(A[r][c]);
            r++;
            c--;
        }
        ans.push_back(s);
        i++;
        j++;
    }
    i=1;j=A.size()-1;
    while(i<A.size())
    {
        int r=i,c=j;
        vector<int> s;
        while(r<A.size() && c>=0)
        {
            s.push_back(A[r][c]);
            r++;
            c--;
        }
        ans.push_back(s);
        i++;
    }
    return ans;
}
