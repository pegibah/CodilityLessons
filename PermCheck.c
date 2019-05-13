int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
	int *count = (int*)malloc(sizeof(int)*N);
	for (int i = 0; i < N; i++)
	{
		if (A[i]<1 || A[i]>N)
		{
			return 0;
		}
		else if (count[A[i] - 1] == 1)
			return 0;
		else
			count[A[i] - 1] = 1;
	}

	return 1;}
