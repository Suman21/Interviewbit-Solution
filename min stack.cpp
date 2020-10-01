int arr[12345678],minimum[12345678];
int cur,mincur;
MinStack::MinStack() {
    cur=-1;
    mincur=-1;
}

void MinStack::push(int x) {
    //assert(cur<=1234567);
    if(mincur==-1 || x<=minimum[mincur])
    {
        mincur++;
        minimum[mincur]=x;
    }
    cur++;
    arr[cur]=x;
}

void MinStack::pop() {
    //assert(cur<=1234567);
    if(cur==-1)
     return;
    if(arr[cur]==minimum[mincur])
     mincur--;
    cur--;
}

int MinStack::top() {
    //assert(cur<=1234567);
    if(cur==-1)
     return -1;
    
    return arr[cur];
}

int MinStack::getMin() {
    //assert(cur<=1234567);
    if(mincur==-1)
     return -1;
    return minimum[mincur];
}




