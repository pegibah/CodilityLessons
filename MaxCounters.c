struct Results solution(int N, int A[], int M) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
	int max = 0;
	int plusmax = 0;
	int *c = (int*)malloc(sizeof(int)*N);
	for (int i = 0; i < N; i++)
		c[i] = 0;
	for (int i = 0; i < M; i++)
	{
		if (A[i] >= 1 && A[i] <= N)
		{
			if (c[A[i] - 1] < plusmax)
			{
				c[A[i] - 1] = plusmax;
			}
			c[A[i] - 1]++;
			if (c[A[i] - 1] > max)
			{
				max = c[A[i] - 1];
			}
		}
		else if (A[i] == N + 1)
		{
		
				plusmax= max;
		}
	}
	for (int j = 0; j < N; j++)
	{
		if (c[j] < plusmax)
			c[j] = plusmax;}
    result.C = c;
    result.L = N;
    return result;
}
