int Solution::isPower(int A) {
    double n=A;
    if(A==1) return 1;
    int i=2;
    while(n>2){
        double d=1/(double)i;
        n=pow(A,d);
        if(pow(round(n),i)==A) return 1;
        i++;
    }
    return 0;
}
