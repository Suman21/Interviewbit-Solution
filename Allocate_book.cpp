int Solution::books(vector<int> &A, int B) {
    long long int l = 0, h = 0, mid, ans, num_studs, _sum;
    if(B > A.size())
        return -1;
    for(auto i : A)
        h += i;
    ans = INT_MAX;
    while(l <= h){
        mid = (l + h) / 2;
        num_studs = 1;
        _sum = 0;
        bool poss = true;
        for(auto i : A)
            if(i > mid){
                poss = false;
                break;
            }
            else if(_sum + i <= mid)
                _sum += i;
            else{
                _sum = i;
                num_studs++;
                if(num_studs > B){
                    poss = false;
                    break;
                }
            }
        if(poss){
            ans = min(ans, mid);
            h = mid - 1;
        }else
            l = mid + 1;
    }
    return ans;
}
