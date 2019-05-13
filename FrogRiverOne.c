// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int X, int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    	int sum = 0;
	int *count = (int*)malloc(sizeof(int)*X);
	for (int i = 0; i < X; i++)
	{
		count[i] = 0;
	}
	for (int i = 0; i < N; i++)
	{
		if (count[A[i] - 1] == 0)
		{
			count[A[i] - 1] = 1;
			sum += count[A[i] - 1];
		}
			if (sum == X)
			{
				return i;
			}
	}

	return -1;
}
