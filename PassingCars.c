// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int count=0;
    int passing=0;
    for(int i=0; i<N; i++)
    {
        if(A[i]==0)
        {
           count++; 
        }
        else
            passing+=count;
        if (passing>1000000000)
            return -1;
            
    }
    return passing;
}
