vector<int> Solution::searchRange(const vector<int> &A, int B) {
   int s=0,e=A.size(),f=0,m,l=0,r=0;
   vector<int> ans;
   if(A[A.size()-1]<B)
   {
       ans.push_back(-1);
       ans.push_back(-1);
       return ans;
   }
    while(e>=s)
   {
       m=(s+e)/2;
       if((A[m]==B && m==0) || (A[m]==B && A[m-1]!=B))
        {
            f=1;
            l=m;
            break;
        }
        else if(A[m]>=B)
        {
            e=m-1;
        }
        else
            s=m+1;
        
   }
   s=0;
   e=A.size();
   if(f==0)
   {
       ans.push_back(-1);
       ans.push_back(-1);
       return ans;
   }
   ans.push_back(m);
  while(e>=s)
   {
       m=(s+e)/2;
       if((A[m]==B && m==A.size()-1) || (A[m]==B && A[m+1]!=B))
        {
            f=1;
            l=m;
            break;
        }
        else if(A[m]>B)
        {
            e=m;
        }
        else
            s=m+1;
   }
    ans.push_back(m);
   return ans;
}
