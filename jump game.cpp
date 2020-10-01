nt Solution::canJump(vector<int> &A) {
    if(A.size()==0 || A.size()==1){
        return 1;
    }
    int j= A.size()-1;
    int i= A.size()-2;
    while(i>=0){
        if(i+A[i]<j){
            if(i==0){
                return 0;
            }
        }else{
            j = i;
        }
        i--;
    }
    return 1;
}
