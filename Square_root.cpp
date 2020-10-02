int root(int num) {
    int start_index = 0;
    int end_index = 46341;
    int cur;
    long long cur2;
    while (start_index <= end_index) {
        cur = (start_index+end_index)/2;
        cur2 = cur*cur;
        if (cur2 == num || ((cur2<num)&&(cur2+2*cur+1>num))) {
            return cur;
        } else if (cur*cur > num) {
            end_index = cur-1;
        } else {
            start_index = cur+1;
        }
    }
    return -1;
}

int Solution::sqrt(int A) {
    return root(A);
}

