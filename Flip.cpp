// only function
int* flip(char* A, int *len1) {
  int i=0,j,k,c=0,c1=0,n=0,no_of_one=0,l=-1,r,l1=0,r1=0;
 n=strlen(A);
 for(i=0;i<n;i++)
 {if(A[i]=='0')
 { if(l<0)
    l=i+1;
    r=i+1;
  c++;
 }
  else
  c--;
  if(c<0)
  {c=0;
  l=-1;
   }
  if(c1<c)
  {l1=l;
   r1=r;
   c1=c;
  }
}
if(l1>0)
printf("%d %d ",l1,r1);
}
