
int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int *seen = (int)malloc(sizeof(int)*(N+1));

	for (int i = 0; i < N; i++)
	{
		if (A[i]> 0 && A[i]<=N+1)
			seen[A[i]-1]=1;
		
	}
	for (int i = 0; i < N+1; i++)
		if (seen[i] != 1)
		{
			return  i + 1;
		}

	return N + 1;
}
