vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A.size()==0 || B==1)
    return A;
    queue<int> window;
    int n=A.size();
    int max=A[0];
    window.push(A[0]);
    for(int i=1;i<n && i<B;i++){
        if(A[i]>max)
        max=A[i];
        window.push(A[i]);
    }
    
    vector<int> result;
    result.push_back(max);
    for(int i=B;i<n;i++){
        if(A[i]>=max)
          {  max=A[i];
           window.pop();
          
           window.push(A[i]);
           
           result.push_back(max);
          }
          else{
              if(window.front()==max){
                
                
            window.pop();
            //if(!window.empty())
            max=window.front();
            for(int j=i-B+1;j<=i;j++)
            max=(max>A[j])?max:A[j];
            
           window.push(A[i]);
           
           result.push_back(max);
            
        }
        else{
             window.pop();
             window.push(A[i]);
           
           result.push_back(max);
        }
              
          }
    }
        
       
    return result;
}

