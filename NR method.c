#include <stdio.h>
#include <math.h>

float f(float);
float df(float);

int main()
{
	float x;
	int i = 1, n;

	x=4*atan(1);

	printf("Number of Iterations = ");
	scanf("%d", &n);

	while(i <= n)
	{
		x = x - f(x)/df(x);
		i++;
	}

	printf("Approx. root =%f \n", x);
	return 0;
}

float f(float x)
{
	return x*sin(x)+cos(x);
}

float df(float x)
{
	return x*cos(x);
}
