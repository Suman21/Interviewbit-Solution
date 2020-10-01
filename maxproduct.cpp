int Solution::maxSpecialProduct(vector<int> &A) {
    long long int n=A.size();
    if(A.size()<=3){ 
    return 0;
    }
    long long int beg=0,end=0;
    long long int l=0,r=0;
    bool flag=false;
    long long int ans=0;
    for(end=1;end<A.size()-1;end++){
        if(A[beg]>A[end]){
            l=beg;
            flag=true;
        }
        if(A[end-1]>A[end]){
            beg=end-1;
            l=beg;
            flag=true;
        }
        if(!flag){
            beg=beg+1;
        }
        if(A[end+1]>A[end]){
            r=end+1;
        }
        if(ans<(l*r)){
            ans=(l*r);
        }
        l=0;
        r=0;
        flag=false;
        
    }
    return int(ans%1000000007);
}
    

