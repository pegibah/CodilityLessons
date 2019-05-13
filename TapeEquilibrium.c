int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int sumleft = 0;
    int sumright = 0;
  
    for(int i=1; i<N; i++)
    {
     sumright+=A[i];   
    }
    sumleft= A[0];
    int res=abs(sumleft-sumright);
    for(int i=1; i<N; i++)
    {
       if(abs(sumleft-sumright)<res)
       {
           res =abs(sumleft-sumright);
       }
       sumright-=A[i];
       sumleft+=A[i];
       
    }
    return res;
}
