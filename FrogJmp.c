// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int X, int Y, int D) {
    // write your code in C99 (gcc 6.2.0)
    int q = (Y-X) / D;
    int r= (Y-X) %D;
    int res;
    if (r==0)
        res = q;
    else
        res = q+1;
    return res;
}
