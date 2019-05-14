// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
#include <float.h>
int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    
    long long int *sum = (long long int)malloc(sizeof(long long int)*(N+1));
	sum[0] = 0;
	for (int i = 0; i < N; i++)
	{
		sum[i + 1] = sum[i] + A[i];
	}
	float minAvg = FLT_MAX;
	int idx = 0;
	for (int i = 0; i < N - 1; i++)
	{
		int ir = i + 1;
		float avg2 = (sum[ir + 1] - sum[i]) / 2.0f;
		if (avg2 < minAvg)
		{
			minAvg = avg2;
			idx = i;
		}
		if (i < N - 2)
		{
			int i3 = i + 2;
			float avg3 = (sum[i3 + 1] - sum[i]) / 3.0f;
			if (avg3 < minAvg)
			{
				minAvg = avg3;
				idx = i;
			}
		}


	}
	return idx;
}
