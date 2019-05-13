int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    long long int M = (long long) N;
    long long int sum = 0LL;
    long long int total =(M+1)*(M+2)/2;
    for (int i=0; i<N; i++)
    {
     sum+=A[i];
    }
    return total - sum;
}
