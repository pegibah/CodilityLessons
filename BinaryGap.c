int solution(int N) {
    // write your code in C99 (gcc 6.2.0)
    char buf[33];
	int i;
	for (i = 0; N > 0; i++)
	{
		int a = N % 2;
		if (a == 1)
			buf[i] = '1';
		else
			buf[i] = '0';
		N = N / 2;
	}
	buf[i] = '\0';
	int l=strlen(buf);
	int state = 0;
	int res = 0;
	int max = 0;
	for (int i = 0; i < l; i++)
	{
		if (buf[i] == '0' && state==0)
		{
			continue;
		}
		else if (buf[i] == '1' && state == 0)
		{
			state =1;
			continue;
		}
		else if (buf[i] == '0' && state == 1)
		{
			res++;
		}
		else if (buf[i] == '1' && state == 1)
		{
			if (res > max)
			{
				max = res;
			}
			res = 0;
		}
		
	}
    
    return max;
}
