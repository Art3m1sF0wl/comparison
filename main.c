#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    clock_t t1, t2;
    int result=1;
	double n;
	double a;
	double b;
	double c;
	n = 3;
	t1 = clock();
	while (n>0)
	{
		b = 1;
		a = 0;
		c = sqrt(n);
		while (b <= c)
		{
			if (fmod(n, b)==0) {
				a++;
			}
			if (a > 1) { b = n; }
			b+=2;

		}
		if (a == 1) {
			result ++;
		}
		n++;
		if (fmod(n,1000000.0) == 0) printf("%f %d\n", n,result);
		n++;
	}
	t2 = clock();
	printf("%d primes in %f\n",result,(float)t2-(float)t1);
	getchar();
	return 0;
}
