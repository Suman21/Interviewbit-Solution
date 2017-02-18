bool comp(string a,string b)
{
    string ab=a.append(b);
    string ba=b.append(a);
    return ab.compare(ba)>0?true:false;
}
string Solution::largestNumber(const vector<int> &A) {
    vector<string> Ans;
    string s="";
    int i,c=0;
    for(i=0;i<A.size();i++)
    {
        Ans.push_back(to_string(A[i]));
        if(A[i]==0)
            c++;
    }
    if(A.size()==c)
        return "0";
    sort(Ans.begin(),Ans.end(),comp);
    for(i=0;i<Ans.size();i++)
        s+=Ans[i];
    return s;
}
