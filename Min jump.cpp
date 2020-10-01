int Solution::jump(vector<int> &A) {
    int s=A.size();
    bool poss=false;
    
    if(s<=1)
        return 0;
    
    if(A[0]==0)
        return -1;
    else if(A[0]>=s-1)
        return 1;
    
    int i=1,j=A[0];
    int temp=0;
    int jumps=1;
    
    while(i<s){
        temp=0;
        while(i<=j && i<s){
            if(A[i]+i>=temp){
                temp=i+A[i];
            }
            i++;
        }
        jumps++;
        if(temp==j)
            return -1;
        else if(temp>=s-1)
            return jumps;
        i = j+1;
        j=temp;
    }
}
