
public class PrintBalancedParentheses{

    public static void fun(char ans[],int i,int op,int cl,int n)
    {
        if(cl==n) {
            System.out.println(ans);
            return;
        }
        if(op>cl)
        {
            ans[i]=')';
            fun(ans,i+1,op,cl+1,n);
        }
        if(op<n)
        {
            ans[i]='(';
            fun(ans,i+1,op+1,cl,n);
        }
    }
    public static void main(String args[]){

        int op=3;
        int cl=op;
        char ans[]=new char[op+op];
        PrintBalancedParentheses:fun(ans,0,0,0,op);
    }
}
