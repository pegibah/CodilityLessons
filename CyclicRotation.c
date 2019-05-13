struct Results solution(int A[], int N, int K) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
   if(N==0)
   {
        result.A =NULL;
        result.N = 0;
   }
   else{
    int count;
	if (K<N)
		count = K;
	else
		count = K%N;
	printf("%d", count);
	while (count>0)
	{
		int temp = A[N - 1];
		for (int i = N - 1; i>0; i--)
		{
			A[i] = A[i - 1];
		}
		A[0] = temp;
		count--;
	}
   }
    
    
    
    result.A = A;
    result.N = N;
    return result;
}
